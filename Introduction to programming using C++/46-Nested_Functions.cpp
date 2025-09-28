#include <bits/stdc++.h>
using namespace std;
enum enWeekDays
{
    Saturday = 1,
    Sunday = 2,
    Monday = 3,
    Tuesday = 4,
    Wednesday = 5,
    Thursday = 6,
    Friday = 7
};

void printDaysMenu()
{
    cout << "Enter day number to print its name" << endl;
    cout << "1. Saturday" << endl;
    cout << "2. Sunday" << endl;
    cout << "3. Monday" << endl;
    cout << "4. Tuesday" << endl;
    cout << "5. Wednesday" << endl;
    cout << "6. Thursday" << endl;
    cout << "7. Friday" << endl;
    cout << "8. Exit" << endl;
}

enWeekDays readDay()
{
    enWeekDays day;
    int dayNumber;
    cin >> dayNumber;
    return (enWeekDays)dayNumber;
}

string getWeekDayName(enWeekDays day)
{
    switch (day)
    {
    case Saturday:
        return "Saturday";
    case Sunday:
        return "Sunday";
    case Monday:
        return "Monday";
    case Tuesday:
        return "Tuesday";
    case Wednesday:
        return "Wednesday";
    case Thursday:
        return "Thursday";
    case Friday:
        return "Friday";
    default:
        return "Invalid Day";
    }
}

int main()
{
    printDaysMenu();
    cout << "today is: " << getWeekDayName(readDay()) << endl;
    return 0;
}