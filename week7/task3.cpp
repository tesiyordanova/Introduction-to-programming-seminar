// task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int max_size = 100;


int main()
{

    int arr[max_size];
	int n; cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin  >>arr[i];
	}
	
	int max = arr[0];
	int second = arr[1];
	for (int i = 0; i < n; i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < max && arr[i]>second)
		{
			second = arr[i];
		}
	}

	int min = arr[0];
	int secondmin = arr[1];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i]> min && arr[i]<secondmin)
		{
			secondmin = arr[i];
		}
	}
	cout << max << " " << second <<" " << min << " " << secondmin;
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
