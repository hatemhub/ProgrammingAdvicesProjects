#include <bits/stdc++.h>
using namespace std;

int main() {
int Number;
string Name;
string Country;

cout <<"enter employee Number: \n";
cin >> Number;
cout <<"enter employee Name: \n";
cin.ignore();
getline(cin, Name);

cout <<"enter employee Country: \n";
cin >> Country;
cout << "Employee Number: " << Number
     << "\nEmployee Name: " << Name
     << "\nEmployee Country: " << Country << endl;
}