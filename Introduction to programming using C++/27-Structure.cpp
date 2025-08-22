#include <iostream>
using namespace std;

struct Info {
    string name, city, country;
    int age, monthlySalary, YearlySalary= monthlySalary*12;
    bool isMarried;
    char gender;
};
int main() {
    Info person1;
    person1.name = "Hatem";
    person1.city = "Cairo";
    person1.country = "Egypt";
    person1.age = 30;
    person1.monthlySalary = 2000;
    person1.isMarried = false;
    cout << "Name: " << person1.name << endl;
    cout << "City: " << person1.city << endl;
    cout << "Country: " << person1.country << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Monthly Salary: " << person1.monthlySalary << endl;
    cout << "Yearly Salary: " << person1.monthlySalary * 12 << endl;
    cout << "Married: " << person1.isMarried << endl;
    return 0;
}