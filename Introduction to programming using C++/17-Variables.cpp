#include <iostream>
using namespace std;

int main() {
    /*
    Are the following valid variable names and why?
Age; correct variable name
My-Age; incorrect variable name (contains hyphen)
My_Age; correct variable name (underscore is allowed)
_Age; correct variable name (starts with underscore)
2x; incorrect variable name (starts with digit)
X2; correct variable name (starts with letter)
My Name; incorrect variable name (contains space)
MyName; correct variable name (no spaces)
#Name; incorrect variable name (starts with special character)
$Name; correct variable name (starts with special character)
N@me; correct variable name (contains special character)
int; incorrect variable name (reserved keyword)
float; incorrect variable name (reserved keyword)
*/

//info card
string Name, City, Country;
unsigned short Age, MonthlySalary, YearlySalary;
char Gender;
bool Married;
Name = "Hatem";
City = "Cairo";
Country = "Egypt";
Age = 30;
MonthlySalary = 5000;
YearlySalary = MonthlySalary * 12;
Gender = 'M';
Married = true;
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
short a = 20, b = 30, c = 10;
short sum = a + b + c;
cout << a << " + \n" << b << " + \n" << c << "\n ----------------------- \n" << sum << endl;

//After 5 years
int futureAge = Age + 5;
cout << "After 5 years, you will be " << futureAge << " years old." << endl;
    return 0;
}