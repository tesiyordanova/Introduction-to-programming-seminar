// task9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int maxsize = 50;

void evaluate(const char* arr) {
    static int small = 0;
    static int big = 0;
    static int n = 0;
    if (*arr=='\0')
    {
        cout << "small letters: " << small << endl;
        cout << "big letters: " << big << endl;
        cout << "digits: " << n << endl;
        return;
    }
    if (*arr>='a' && *arr<='z')
    {
        ++small;
    }
    else if (*arr >= 'A' && *arr <= 'Z' )
    {
        ++big;
    }
    else if (*arr >= '0' && *arr <= '9' )
    {
        ++n;
    }
    evaluate(arr + 1);

}
int main()
{
    char arr[maxsize];
    cin.getline(arr, maxsize);
    evaluate(arr);

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
