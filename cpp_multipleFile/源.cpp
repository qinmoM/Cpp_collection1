#include <iostream>
#include "БъЭЗ.h"

int main()
{
	int arr[3] = { 2, 3, 1 };
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	My_Sort1(arr, sizeof(arr) / sizeof(arr[0]));
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		std::cout << arr[i] << " ";
	}
	getchar();
	return 0;
}