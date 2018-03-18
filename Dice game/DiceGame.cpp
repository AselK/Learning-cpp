#include <iostream>
#include <stdlib.h>
#include <string>
int main()
{
	std::cout << "Available game modes:" << std::endl;
	std::cout << "1 - Play with PC" << std::endl;
	std::cout << "2 - Play with friend" << std::endl;
	std::cout << "3 - Play alone" << std::endl;
	std::cout << "Player1 score is: 1000" << std::endl;
	std::cout << "Player2 score is: 1000" << std::endl;
	std::cout << "Enter game mode: ";
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

	while (true)
	{
		int computerNumber = rand() % 12 + 1; //рандомное число
		std::cout << std::endl;
		std::cout << "*******************************************" << std::endl;
		std::cout << "Current step: " << stepsCounter << std::endl;
		std::cout << "Random number is: " << computerNumber << std::endl; //показывает загаданное число 
		stepsCounter++;  //счетчик шагов

		std::string userInput1;
		if (gameMode == 2 || gameMode == 1)
		{
			std::cout << "player1 enter number: ";
			std::cin >> userInput1;
			if (userInput1 == "stop")
			{
				break;
			}

			std::string userInput2;
			if (gameMode == 2) // игра с другом
			{
				std::cout << "Player2 enter number: ";
				std::cin >> userInput2;
				if (userInput2 == "stop")
				{
					break;
				}
			}
			else if (gameMode == 1) // игра с PC
			{
				userInput2 = std::to_string(rand() % 12 + 1); // случайное число PC
				std::cout << "Player2 (PC) entered: " << userInput2 << std::endl;
			}

			if (stepsCounter > numberOfSteps) //если текущий шаг больше максимального хода
			{
				if (std::stoi(userInput1) != computerNumber && std::stoi(userInput2) != computerNumber)
				{
					std::cout << "Game over. Nobody won" << std::endl;
					break;
				}
				if (std::stoi(userInput1) == computerNumber && std::stoi(userInput2) != computerNumber)
				{
					std::cout << "Player1 won! Game over" << std::endl;
					break;
				}
				if (std::stoi(userInput1) != computerNumber && std::stoi(userInput2) == computerNumber)
				{
					std::cout << "Player2 won! Game over" << std::endl;
					break;
				}
			}

			if (std::stoi(userInput1) == computerNumber && std::stoi(userInput2) == computerNumber) //если первый игрок и второй угадал число
			{
				std::cout << "Game over. Nobody won" << std::endl;
			}
			else if (std::stoi(userInput1) != computerNumber && std::stoi(userInput2) == computerNumber) // если первый игрок не угадал, а второй угадал
			{
				player2Score = player2Score + betSize;
				player1Score = player1Score - betSize;
				std::cout << "Player2 got it!" << std::endl;
			}
			else if (std::stoi(userInput2) != computerNumber && std::stoi(userInput1) == computerNumber) // если второй игрок не угадал, а первый угадал
			{
				player2Score = player2Score - betSize;
				player1Score = player1Score + betSize;
				std::cout << "Player1 got it!" << std::endl;
			}
			else //если никто не угадал
			{
				player1Score = player1Score - betSize;
				player2Score = player2Score - betSize;
				std::cout << "Nobody guessed. Continue" << std::endl;
			}

			std::cout << "Player1 score is: " << player1Score << std::endl; // очки игрока1
			std::cout << "Player2 score is: " << player2Score << std::endl << std::endl; // очки игрока2

			// проверка на отрицательный счет
			if (player1Score <= 0 && player2Score > 0)
			{
				std::cout << "Player2 won! Game over";
				break;
			}

			if (player1Score > 0 && player2Score <= 0)
			{
				std::cout << "Player1 won! Game over";
				break;
			}

			if (player1Score <= 0 && player2Score <= 0)
			{
				std::cout << "Draw. Game over" << std::endl;
				break;
			}
		}
		else if (gameMode == 3)
		{

			std::cout << "Enter the number: ";
			std::cin >> userInput1;
			if (userInput1 == "stop")
			{
				break;
			}

			if (std::stoi(userInput1) == computerNumber)
			{
				std::cout << "You won!" << std::endl;
				break;
			}
		}
	}
}
