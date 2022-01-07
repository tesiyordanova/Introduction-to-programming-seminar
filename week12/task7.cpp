// task7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int maxsize = 50;

int min(int* arr, int size) {
	if (size == 1)
	{
		return arr[0];
	}
	else
	{
		if (arr[size - 1] < min(arr, (size - 1)))
			return arr[size - 1];
		else
			return min(arr, (size - 1));
	}
}
int main()
{
	cout << "enter size of array: ";
	int size; cin >> size;
	int arr[maxsize];
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	cout << "min: " << min(arr, size);

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
