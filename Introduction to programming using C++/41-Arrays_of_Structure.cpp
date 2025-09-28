#include <bits/stdc++.h>
using namespace std;

struct stInfo
{
    string firstName;
    string lastName;
    int age;
    string phone;
};

void readInfo(stInfo &info)
{
    cout << "Enter first name: ";
    cin >> info.firstName;

    cout << "Enter last name: ";
    cin >> info.lastName;

    cout << "Enter age: ";
    cin >> info.age;

    cout << "Enter phone: ";
    cin >> info.phone;
}
void readPersonsInfo(stInfo persons[2])
{
    readInfo(persons[0]);
    readInfo(persons[1]);
}

void printInfo(stInfo &info)
{
    cout << "-------------------" << endl;
    cout << "First name: " << info.firstName << endl;
    cout << "Last name: " << info.lastName << endl;
    cout << "Age: " << info.age << endl;
    cout << "Phone: " << info.phone << endl;
    cout << "-------------------" << endl;
}
void printPersonsInfo(stInfo persons[2])
{
    printInfo(persons[0]);
    printInfo(persons[1]);
}

int main()
{
    stInfo persons[2];

    readPersonsInfo(persons);
    system("color 4f");
    printPersonsInfo(persons);

    return 0;
}