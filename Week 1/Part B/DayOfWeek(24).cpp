#include<bits/stdc++.h>
using namespace std;
int cal(int day, int month, int year)
{
    if (month < 3)
    {
        month += 12;
        year--;
    }
    int K = year % 100;
    int J = year / 100;
    int h = (day + 13 * (month + 1) / 5 + K + K / 4 + J / 4 - 2 * J) % 7;
    return h;
}
int main()
{
    int day, month, year; cin >>  day >> month >> year;
    int dayOfWeek = cal(day, month, year);
    switch (dayOfWeek)
    {
        case 2: cout << "Monday"; break;
        case 3: cout << "Tuesday"; break;
        case 4: cout << "Wednesday"; break;
        case 5: cout << "Thurday"; break;
        case 6: cout << "Friday"; break;
        case 0: cout << "Saturday"; break;
        case 1: cout << "Sunday"; break;
    }
}
