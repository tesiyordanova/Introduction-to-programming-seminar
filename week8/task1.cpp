﻿// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int max_size = 20;

void fillMatrix(int matr[][max_size], int size1, int size2) {
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			cout << "matr[" << i << "][" << j << "]=";
			cin >> matr[i][j];
		}
	}
}
void printMatrix(int matr[][max_size], int size1, int size2) {
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			cout << matr[i][j] << " ";
		}
		cout << endl;
	}
}
void transpose(int mtr[][max_size], int n, int m) {
	int tr[max_size][max_size];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			tr[i][j] = mtr[j][i];
			cout << tr[i][j]<<" ";
		}
		cout << endl;
	}
}
int main()
{
    int n; cin >> n;
    int m; cin >> m;
    int mtr[max_size][max_size];
	fillMatrix(mtr, n, m);
	printMatrix(mtr, n, m);
	transpose(mtr, n, m);

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
