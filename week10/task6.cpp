// task6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void unite(char* arr1, char* arr2) {
   char* start = arr1;
   while (*start != '\0')
   {
      start++;
   }
   while (*arr2 != '\0')
   {
      *start++ = *arr2++;
   }
   *start = '\0';
   cout << arr1;
    
}
int main()
{
    char arr1[20]; cin.getline(arr1, 20);
    char arr2[20]; cin.getline(arr2, 20);
    unite(arr1, arr2);

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
