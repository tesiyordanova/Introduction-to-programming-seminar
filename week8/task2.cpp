// task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int max_size = 20;

void fillMatrix(int matr[][max_size], int size) {
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "matr[" << i << "][" << j << "]=";
            cin >> matr[i][j];
        }
    }
}
void printMatrix(int matr[][max_size], int size) {
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << matr[i][j] << " ";
        }
        cout << endl;
    }
}
void transpose(int mtr[][max_size], int tr[][max_size], int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            tr[i][j] = mtr[j][i];
        }
      
    }
}
bool isSymetric(int mtr[][max_size], int n) {
    int tr[max_size][max_size];
    transpose(mtr, tr, n);
    

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mtr[i][j] != tr[i][j])
                return false;
        }
    }

    return true;
}
int main()
{
    int n; cin >> n;
    int mtr[max_size][max_size];
    fillMatrix(mtr, n);
    printMatrix(mtr, n);
    if (isSymetric(mtr, n))
    {
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
