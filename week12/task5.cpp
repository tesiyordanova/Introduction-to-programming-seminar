// task5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool areEqual(char* str1, char* str2) {
	if ( *str1 == *str2 && *(str1+1)=='\0' && *(str2+1)=='\0')
	{
		return true;
	}
	if (*str1 == *str2 && *(str1 + 1) != '\0' && ( *str2 + 1) != '\0')
	{
		return areEqual((str1 + 1), (str2 + 1));
	}
	else return false;
	
}
int main()
{
	char str1[50];
	cin.getline(str1, 50);
	char str2[50];
	cin.getline(str2, 50);
	cout << boolalpha << areEqual(str1, str2);

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
