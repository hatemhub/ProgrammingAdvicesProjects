#include <iostream>
using namespace std;

int main() {
    //info card
string Name, City, Country;
unsigned short Age, MonthlySalary;
unsigned int YearlySalary;
char Gender;
bool Married;
cout << "Please enter your details:" << endl;
cout << "Enter your name: ";
cin >> Name;
cout << "Enter your city: ";
cin >> City;
cout << "Enter your country: ";
cin >> Country;
cout << "Enter your age: ";
cin >> Age;
cout << "Enter your monthly salary: ";
cin >> MonthlySalary;
YearlySalary = MonthlySalary * 12;
cout << "Are you married? (1 for Yes, 0 for No): ";
cin >> Married;
cout << "Enter your gender (M/F): ";
cin >> Gender;


cout << "**********************************" << endl;
cout << "Name: " << Name << endl;
cout << "Age: " << Age << endl;
cout << "City: " << City << endl;
cout << "Country: " << Country << endl;
cout << "Monthly Salary: " << MonthlySalary << endl;
cout << "Yearly Salary: " << YearlySalary << endl;
cout << "Gender: " << Gender << endl;
cout << "Married: " << Married << endl;
cout << "**********************************" << endl;

//simple calculation
short a, b, c;
cout << "Enter three numbers to sum: ";
cin >> a >> b >> c;
int sum = a + b + c;
cout << a << " + \n" << b << " + \n" << c << "\n ----------------------- \n" << sum << endl;

//After 5 years
unsigned short futureAge = Age + 5;
cout << "After 5 years, you will be " << futureAge << " years old." << endl;
    return 0;
}