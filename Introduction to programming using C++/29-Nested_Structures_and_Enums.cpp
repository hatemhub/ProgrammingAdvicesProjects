#include <iostream>
using namespace std;

enum enColor{ Red, Green, Blue };
enum enGender{ Male, Female };
enum enMaritalStatus{ Single, Married };

struct stAdress {
    string streetName;
    string city;
    string zipCode;
};

struct stContactInfo {
    string phoneNumber;
    string email;
    stAdress Address;
};

struct stPerson {
    string firstName;
    string lastName;
    enGender Gender;
    enMaritalStatus MaritalStatus;
    stContactInfo ContactInfo;
    enColor FavoriteColor;
};
int main() {
    stPerson person;

    person.firstName = "John";
    person.lastName = "Doe";

    person.ContactInfo.email = "xyz@xyz.com";
    person.ContactInfo.phoneNumber = "123-456-7890";
    person.ContactInfo.Address.streetName = "123 Main St";
    person.ContactInfo.Address.city = "Anytown";
    person.ContactInfo.Address.zipCode = "12345";
    person.Gender = enGender::Male;
    person.MaritalStatus = enMaritalStatus::Single;
    person.FavoriteColor = enColor::Blue;
    cout << "First Name: " << person.firstName << endl;
    cout << "Last Name: " << person.lastName << endl;
    cout << "Email: " << person.ContactInfo.email << endl;
    cout << "Phone Number: " << person.ContactInfo.phoneNumber << endl;
    cout << "Street Name: " << person.ContactInfo.Address.streetName << endl;
    cout << "City: " << person.ContactInfo.Address.city << endl;
    cout << "Zip Code: " << person.ContactInfo.Address.zipCode << endl;
}