﻿// third-task.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool isPrime(int n) {
	for (int i = 0; i <=n/2; i++)
	{
		if (n%i==0)
		{
			return false;
			break;
		}
		return true;
	}
}
bool sumPrime(int n, int m) {
	if (isPrime(n) && isPrime(m) && n+2==m)
	{
		return true;
	}
	else return false;
}
int main()
{

	int n; cin >> n;
	int m; cin >> m;
	if (sumPrime(n, m)) {
		cout << "yes";
	}
	else cout << "no";

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
