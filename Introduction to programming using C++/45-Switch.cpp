#include <bits/stdc++.h>
using namespace std;

enum enCountryChoice
{
    Egypt = 1,
    KSA = 2,
    USA = 3,
    UK = 4,
    Canada = 5,
    Germany = 6
};
int main()
{
    cout << "Choose your country: " << endl;
    cout << "1. Egypt" << endl;
    cout << "2. KSA" << endl;
    cout << "3. USA" << endl;
    cout << "4. UK" << endl;
    cout << "5. Canada" << endl;
    cout << "6. Germany" << endl;
    cout << "Enter your country choice: ";
    int userChoice;
    enCountryChoice Country;
    cin >> userChoice;
    Country = (enCountryChoice)userChoice;
    switch (Country)
    {
    case enCountryChoice::Egypt:
        cout << "You chose Egypt" << endl;
        break;
    case enCountryChoice::KSA:
        cout << "You chose KSA" << endl;
        break;
    case enCountryChoice::USA:
        cout << "You chose USA" << endl;
        break;
    case enCountryChoice::UK:
        cout << "You chose UK" << endl;
        break;
    case enCountryChoice::Canada:
        cout << "You chose Canada" << endl;
        break;
    case enCountryChoice::Germany:
        cout << "You chose Germany" << endl;
        break;
    default:
        cout << "Invalid country choice" << endl;
        break;
    }
    return 0;
}