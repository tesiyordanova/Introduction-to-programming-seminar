// task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int max_size = 20;

void rotate(int mtr[][max_size], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        for (int j = i; j < size - i - 1; j++)
        {
            int temp = mtr[i][j];
            mtr[i][j] = mtr[size - 1 - j][i];
            mtr[size - 1 - j][i] = mtr[size - 1 - i][size - 1 - j];
            mtr[size - 1 - i][size - 1 - j] = mtr[j][size - 1 - i];
            mtr[j][size - 1 - i] = temp;
        }
    }
}
int main()
{
    int size; cin >> size;
    int mtr[max_size][max_size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout<<"mtr["<<i<<"]["<<j<<"]=";
            cin >> mtr[i][j];
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout <<  mtr[i][j]<<" ";
        }
        cout << endl;
    }
    cout << endl;
    rotate(mtr, size);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << mtr[i][j] << " ";
        }
        cout << endl;
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
