// ex3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int max_size = 100;

int main()
{
    cout << "enter first and last name:";
    char arr1[max_size];
    cin.getline(arr1, max_size);

    char arr2[max_size];
    cin.getline(arr2, max_size);

    char arr3[max_size];
    int i = 0;
    for (int i=0; arr1[i] != '\0'; i++)
    {
        if (arr1[i] >= 'A' && arr1[i] <= 'Z') 
        {
            arr3[i] = (int)arr1[i] + 32;
        }

        else
        {
            arr3[i] = arr1[i];
        }
           
    }
    arr3[i] = '_';
    i++;

    for (int j = 0; arr2[j] != '\0'; j++, i++)
    {
        if (arr2[j] >= 'A' && arr2[j] <= 'Z')
            arr3[i] = (int)arr2[j] + 32;
        else
            arr3[i] = arr2[j];
    }

    arr3[i] = '\0';
    cout << arr3;

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
