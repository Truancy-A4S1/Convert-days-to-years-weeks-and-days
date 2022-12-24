    // Convert days to years, weeks and days

#include <iostream>

using namespace std;

void converter(int day)
{
    int year, month, week;
    year = day / 365;
    cout << endl << "YEAR: " << year << endl;

    day = day - (year * 365);
    week = day / 7;
    cout << "WEEK: " << week << endl;

    day = day - (week * 7);
    cout << "DAY: " << day << endl;
}

int main()
{
    cout << "DAYS to YEARS, WEEKS, and DAYS CONVERTER" << endl;
    cout << endl << "ENTER DAYS: ";
    int day;
    cin >> day;
    converter(day);
}
