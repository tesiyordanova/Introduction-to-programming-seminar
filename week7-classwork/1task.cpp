// 1task.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int max_size = 100;

void fillArray(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
double avarage(int arr[], int n) {
	double sum =0 ;
	for (int i = 0; i < n; i++) {
		sum = sum + arr[i];
	}
	sum = sum / n;
	return sum;
}
int main()
{
	int n;
	cout << "Size of array:" << endl;
	cin >> n;
	cout << "Array:" << endl;
	int arr[max_size];
	fillArray(arr, n); 
	cout << "Avarage sum:" << endl;
	cout << avarage(arr, n);
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
