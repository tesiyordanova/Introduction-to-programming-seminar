// task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool isValid(int time) {
    int minutes = time % 100;
    int hours = time / 100;
    bool validMinutes = minutes >= 0 && minutes <= 59;
    bool validHours = hours >= 0 && hours <= 23;

    return validHours && validMinutes;
}
void findDifference(int time1, int time2) {
    int minutes1 = time1 % 100;
    int hours1 = time1 / 100;

    int minutes2 = time2 % 100;
    int hours2 = time2 / 100;


    if (isValid(time1) && isValid(time2))
    {
       minutes1 += hours1 * 60;
        minutes2 += hours2 * 60;

        if (minutes2 < minutes1) {
            minutes2 += 24 * 60;
        }

        int diff = minutes2 - minutes1;

        int diffHours = diff / 60;
        int diffMinutes = diff - diffHours*60;
        if (diffHours<10 && diffMinutes<10)
        {
            cout << "0" << diffHours<<"0"<<diffMinutes;
        }
        if (diffHours < 10 && diffMinutes >= 10)
        {
            cout << "0" << diffHours << diffMinutes;
        }
        if (diffHours >= 10 && diffMinutes < 10 )
        {
            cout << diffHours << "0" << diffMinutes;
        }
        else cout << diffHours  << diffMinutes;
    }
    else cout << "invalid";
}
int main()
{
    int first, second;
    cin >> first >> second;
    findDifference(first, second);

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
