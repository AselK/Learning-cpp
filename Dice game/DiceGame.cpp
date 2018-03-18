#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string>
int main()
{
	std::cout << "Play with PC." << " " << "Enter 1: " << std::endl;
	std::cout << "Play with friend." << " " << "Enter 2: " << std::endl;
	std::cout << "Play alone :(." << " " << "Enter 3: " << std::endl;
	std::cout << "Choose the game mode: ";
	int gameMode;
	std::cin >> gameMode;
	std::cout << "Enter number of steps: ";
	int numberOfSteps;
	int stepsCounter = 1;
	std::cin >> numberOfSteps;
	std::cout << "Enter bet size: ";
	int betSize;
	std::cin >> betSize;

	int player1Score = 1000;
	int player2Score = 1000;
	int randomize();
	//int computerNumber = rand() % 12 + 1; //рандомное число
	//std::cout << "Random number is: " << computerNumber << std::endl; //показывает загаданное число 
	while (true)
	{
		int computerNumber = rand() % 12 + 1; //рандомное число
		std::cout << "Random number is: " << computerNumber << std::endl; //показывает загаданное число 
		std::cout << "Current step: " << stepsCounter << std::endl;
		stepsCounter++;  //счетчик шагов
		std::string userInput1;
		std::cout << "player1 enter number: ";
		std::cin >> userInput1;

		if (userInput1 == "stop")
		{
			break;
		}
		std::string userInput2;
		std::cout << "player2 enter number: ";
		std::cin >> userInput2;
		if (userInput2 == "stop")
		{
			break;
		}

		if (stepsCounter > numberOfSteps) //если текущий шаг больше максимального хода
		{
			if (std::stoi(userInput1) != computerNumber && std::stoi(userInput2) != computerNumber)
			{
				std::cout << "Game over. Nobody win" << std::endl;
				break;
			}
			if (std::stoi(userInput1) == computerNumber && std::stoi(userInput2) != computerNumber)
			{
				std::cout << "Player1 win! Game over" << std::endl;
				break;
			}
			if (std::stoi(userInput1) != computerNumber && std::stoi(userInput2) == computerNumber)
			{
				std::cout << "Player2 win! Game over" << std::endl;
				break;
			}
		}

		if (std::stoi(userInput1) == computerNumber && std::stoi(userInput2) == computerNumber) //если первый игрок и второй угадал число
		{
			std::cout << "Game over. Nobody win" << std::endl;
			//break;
		}
		else if (std::stoi(userInput1) != computerNumber && std::stoi(userInput2) == computerNumber) // если первый игрок не угадал, а второй угадал
		{
			player2Score = player2Score + betSize;
			player1Score = player1Score - betSize;
			std::cout << "Player2 got it!" << std::endl;
			//break;
		}
		else if (std::stoi(userInput2) != computerNumber && std::stoi(userInput1) == computerNumber) // если второй игрок не угадал, а первый угадал
		{
			player2Score = player2Score - betSize;
			player1Score = player1Score + betSize;
			std::cout << "Player1 got it!" << std::endl;
			//break;
		}
		else //если никто не угадал
		{
			player1Score = player1Score - betSize;
			player2Score = player2Score - betSize;
			std::cout << "Nobody guest. Continue" <<std::endl;
		}
		
		// проверка на отрицательный счет
		if (player1Score <= 0 && player2Score > 0)
		{
			std::cout << "Player2 win! Game over";
		}
		else if (player1Score > 0 && player2Score <= 0)
		{
			std::cout << "Player1 win! Game over";
		}
		else if (player1Score <= 0 && player2Score <= 0)
		{
			std::cout << "Game over. Nobody win" << std::endl;
		}

		std::cout << "Player1 score is: " << player1Score << std::endl;
		std::cout << "Player2 score is: " << player2Score << std::endl;
 	}
}
