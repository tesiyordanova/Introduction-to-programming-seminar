// ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int max_size = 100;


int main()
{
    
    char arr[max_size];
    cin.getline(arr, max_size);
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] > 'a' && arr[i] <= 'z')
        {
            arr[i] = arr[i] - 32;
        }

        if (arr[i] == 'A' || arr[i] == 'a')
        {
            arr[i] = '4';
        }

        if (arr[i] == 'E' || arr[i] == 'e')
        {
            arr[i] = '3';
        }

        if (arr[i] == 'I' || arr[i] == 'i')
        {
            arr[i] = '1';
        }

        if (arr[i] == 'O' || arr[i] == 'o')
        {
            arr[i] = '0';
        }

        if (arr[i] == ' ')
        {
            arr[i] = '_';
        }
    }

    cout << arr;

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
