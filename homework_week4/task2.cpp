﻿// task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double a, b, c;
    cout << "Enter coefficients of quadratic equation!" << endl;
    cin >> a >> b >> c;
    double d = b * b - 4 * a * c;
    if (a == 0)
    {
        cout << " Not a quadratic equation!";
    }
    else if (d == 0)
    {

        cout << (-b) / (2 * a);
    }
    else if (d >= 0)
    {
        double x1 = (-b + sqrt(d)) / (2 * a);
        double x2 = (-b - sqrt(d)) / (2 * a);
        cout << "x1:" << x1 << " x2:" << x2;
    }
    else if (d < 0)
    {
        cout << " No roots to this equation!";
    }
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
