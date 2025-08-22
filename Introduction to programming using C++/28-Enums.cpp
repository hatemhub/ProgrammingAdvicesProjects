#include <iostream>
using namespace std;

struct Info {
    string name, city, country;
    int age, monthlySalary, YearlySalary= monthlySalary*12;
};

enum MaritalStatus { Single, Married, Divorced};
enum Gender {Male, Female};
enum FavoriteColor {Red, Green, Blue, Yellow, Black, White};

int main() {
    MaritalStatus MyStatus;
    MyStatus = MaritalStatus::Married;
    Gender MyGender;
    MyGender = Gender::Male;
    FavoriteColor MyColor;
    MyColor = FavoriteColor::Blue;
    Info person1;
    person1.name = "Hatem";
    person1.city = "Cairo";
    person1.country = "Egypt";
    person1.age = 30;
    person1.monthlySalary = 2000;
    cout << "Name: " << person1.name << endl;
    cout << "Gender: " << MyGender << endl;
    cout << "City: " << person1.city << endl;
    cout << "Country: " << person1.country << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Monthly Salary: " << person1.monthlySalary << endl;
    cout << "Yearly Salary: " << person1.monthlySalary * 12 << endl;
    cout << "Marital Status: " << MyStatus << endl;
    cout << "Favorite Color: " << MyColor << endl;
    return 0;
}