//Вычесление среднего и нахождение мин и макс значений

#include <iostream>

int main()
{
	int average;
	int minValue;
	int maxValue;
	int nums[10];
	
	nums[0] = 10;
	nums[1] = 18;
	nums[2] = 75;
	nums[3] = 0;
	nums[4] = 1;
	nums[5] = 56;
	nums[6] = 100;
	nums[7] = 12;
	nums[8] = -19;
	nums[9] = 88;
	//вычисляем среднее
	average = 0;
	for (int i = 1; i < 10; i++)
	{
		average += nums[i];
	}
	average /= 10;
	
	std::cout << "Average number is: " << average <<std::endl;
	
	//находим мин и макс значения
	minValue = maxValue = nums[0];
	for (int i = 1; i < 10; i++)
	{
		if (nums[i] < minValue)
		{
			minValue = nums[i];
		}
		if (nums[i] > maxValue)
		{
			maxValue = nums[i];
		}
	}
	std::cout <<"minValue is: " << minValue <<std::endl;
	std::cout <<"maxValue is: " << maxValue <<std::endl;
	
}

