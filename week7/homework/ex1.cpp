// ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int max_size = 32;

int main()
{
  
	cout << "enter option: ";
	int n; cin >> n;

	char arr[max_size];
	cin.ignore();
	cin.getline(arr, 32);

	if (n == 1)
	{
		for (int i = 0; arr[i] != 0; i++)
		{
			if ((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z'))
			{
				cout << arr[i];
			}
		}
	}
	else if (n == 2)
	{
		for (int i = 0; arr[i] != '\0'; i++)
		{
			if (arr[i] >= '0' && arr[i] <= '9')
			{
				cout << arr[i];
			}
		}
	}
	else if (n == 3)
	{
		for (int i = 0; arr[i] != '\0'; i++)
		{
			if ((arr[i] > 'Z' && arr[i] < 'A') || (arr[i] > 'z' && arr[i] < 'a') || (arr[i] < 0 && arr[i]>9))
			{
				cout << arr[i];
			}
		}
	}
	else cout << "enter valid option!";

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
