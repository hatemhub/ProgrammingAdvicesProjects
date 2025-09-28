#include <bits/stdc++.h>
using namespace std;

struct stInfo{
    string name;
    int age;
    string city;
    string country;
    int monthlySalary;
    int yearlySalary(){
        return monthlySalary * 12;
    }
    char gender;
    bool isMarried;
};

void readInfo(stInfo &info){
    cout << "Enter name: ";
    cin >> info.name;
    cout << "Enter age: ";
    cin >> info.age;
    cout << "Enter city: ";
    cin >> info.city;
    cout << "Enter country: ";
    cin >> info.country;
    cout << "Enter monthly salary: ";
    cin >> info.monthlySalary;
    cout << "Enter gender: ";
    cin >> info.gender;
    cout << "Are you married (1 for yes, 0 for no): ";
    cin >> info.isMarried;
};

void printInfo(stInfo info){
    cout << "Name: " << info.name << endl;
    cout << "Age: " << info.age << endl;
    cout << "City: " << info.city << endl;
    cout << "Country: " << info.country << endl;
    cout << "Monthly Salary: " << info.monthlySalary << endl;
    cout << "Yearly Salary: " << info.yearlySalary() << endl;
    cout << "Gender: " << info.gender << endl;
    cout << "Married: " << info.isMarried << endl;
};

int main(){

    stInfo person1;
    readInfo(person1);
    printInfo(person1);

    return 0;
}