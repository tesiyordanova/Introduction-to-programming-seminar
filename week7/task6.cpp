// task6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int max_size = 100;
bool interesting(int n) {
	int last = 0;
	int before = 0;
	while (n!=0)
	{
		last = n % 10;
		before = (n / 10) % 10;
		n /= 10;
		if (last>before)
		{
			return true;
		}
		else
		{
			return false;
			break;
		}
		last = 0;
		before = 0;
	}
	if (n>=0 && n<=9)
	{
		return true;
	}
}
int main()
{
    int n; cin >> n;
	if (n<=1000)
	{
		int arr[max_size];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (interesting(arr[i]))
			{
				cout<<"YES"<<endl;
			}
			else cout << "NO" << endl;

		}
		
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
