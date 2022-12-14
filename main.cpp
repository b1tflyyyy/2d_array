#include<iostream>
#include<time.h>

int main()
{
	int rows = 0;
	int cols = 0;

	std::cout << "enter rows: ";
	std::cin >> rows;

	std::cout << "enter cols: ";
	std::cin >> cols;
	std::cout << std::endl;

	std::cout << "2d array --------------------->";
	std::cout << std::endl;

	int** arr = new int* [rows];

	for (int** pArr = arr; pArr < arr + rows; pArr++)
	{
		*pArr = new int[cols];
	}

	std::srand(time(NULL));

	for (int** pArr = arr; pArr < arr + rows; pArr++)
	{
		for (int* pArr2 = *pArr; pArr2 < *pArr + cols; pArr2++)
		{
			*pArr2 = std::rand() % 20;
		}
	}

	for (int** pArr = arr; pArr < arr + rows; pArr++)
	{
		for (int* pArr2 = *pArr; pArr2 < *pArr + cols; pArr2++)
		{
			std::cout << *pArr2 << '\t';
		}
		std::cout << std::endl;
	}

	for (int** pArr = arr; pArr < arr + rows; pArr++)
	{
		delete[] *pArr;
	}

	delete[] arr;

	system("pause");
	return 0;
}