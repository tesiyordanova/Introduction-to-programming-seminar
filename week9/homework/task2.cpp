// task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int max_size = 50;


bool isSubset()
{
    int size1; cin >> size1;
    int arr1[max_size];
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }
    cout << endl;
        
    int size2; cin >> size2;
    int arr2[max_size];
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }
    cout << endl;

    for (int i = 0; i < size1; i++)
    {
        cout<< arr1[i]<<" ";
    }
    cout << endl;
    for (int i = 0; i < size2; i++)
    {
        cout << arr2[i] << " ";
    }

    bool flag = false;
    for (int i = 0; i < size1; i++)
    {
        flag = false;
        for (int j = 0; j < size1; j++)
        {
            if (arr1[i] == arr2[j])
            {
                flag = true;
                break;
                
            }
        }
        if (!flag)
            return false;
    }
    return true;
}
int main()
{
    if (isSubset())
    {
        cout << "it is";
    }
    else cout << " it is not";
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
