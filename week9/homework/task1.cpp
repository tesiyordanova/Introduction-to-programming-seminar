// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int max_size = 20;

void fillSqMatrix(int mtr[][max_size], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "mtr[" << i << "][" << j << "] = ";
            cin >> mtr[i][j];
        }
    }
}
void printSqMatrix(int mtr[][max_size], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout <<mtr[i][j]<<" ";
        }
        cout << endl;
    }
}
void clock(int mtr[][max_size], int size)
{
    int cols = size, rows = size, cnt = 0;
    int i, c = 0, r = 0;
    int total = rows * cols;
    while (r < rows && c < cols)
    {
        if (cnt == total)
            break;

        for (i = r; i < rows; ++i)
        {
            cout << mtr[i][c] << " ";
            cnt++;
        }
        c++;

        if (cnt == total)
            break;

        for (i = c; i < cols; ++i)
        {
            cout << mtr[cols - 1][i] << " ";
            cnt++;
        }
        rows--;

        if (cnt == total)
            break;

        if (r < rows)
        {
            for (i = rows - 1; i >= r; --i)
            {
                cout << mtr[i][cols - 1] << " ";
                cnt++;
            }
            cols--;
        }

        if (cnt == total)
            break;

        if (c < cols)
        {
            for (i = cols - 1; i >= c; --i)
            {
                cout << mtr[r][i] << " ";
                cnt++;
            }
            r++;
        }
    }
}
int main()
{
	int mtr[max_size][max_size];
    int n; cin >> n;
    fillSqMatrix(mtr, n);
    printSqMatrix(mtr, n);
    clock(mtr, n);

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
