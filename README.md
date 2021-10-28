# UP-SEMINAR
// задача две 
#include <iostream>
using namespace std;

int main()
{
	int first, second, third;
	cout << "Write three numbers!"<<endl;
	cin >> first>> second>> third;
	int max=0;
	if (first>second&&first>third)
	{
		max = max +first;
	}
	else
	{
		if (second > first && second > third)
		{

			max = second;
		}
		else
		{
			if (third > first && third > second)
			{
				max = first;
				if (second > first)
				{
					max = third;
				}
			}
		}
	}
	
	
	cout << "Max:"<< max;
  return 0;
}

//задача 3

#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Write three numbers!" << endl;
    cin >> a >> b >> c;
    if (a<b+c&&b<a+c&&c<a+b)
    {
        cout << "Exist!";
        if (a == b == c)
        {
            cout << " Equilateral!";
        }
        else if (a != b && b != c&&a!=c)
        {
            cout << "Scalence!";
        }
        else
        {
            cout << "Isosceles!";
        }
    }
    else
    {
        cout << "Write corect numbers!";
    }
    return 0;
}
