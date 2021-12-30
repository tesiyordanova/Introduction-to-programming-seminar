// task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void fromSmallToBig(int* arr, int size) {
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }
        }
    }
}
void unite(int* arr1, int size1, int* arr2, int size2, int arr3[]) {
    fromSmallToBig(arr1, size1);
    fromSmallToBig(arr2, size2);
    for (int  i = 0; i < size1+size2; i++)
    {
        if (i < size1) {
            arr3[i] = arr1[i];
        }
        else {
            arr3[i] = arr2[i - size1];
        }
    }
}
int main()
{
    int arr1[10];
    int size1; cin >> size1;
    for (int i = 0; i < size1; i++) {
        cin>> arr1[i];
    }

    int arr2[10];
    int size2; cin >> size2;
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }
    int arr3[10] = {};
    unite(arr1, size1, arr2, size2, arr3);
    for (int i = 0; i <size1+size2; i++) {
        cout << arr3[i] << " ";
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
