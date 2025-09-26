#include <bits/stdc++.h>
using namespace std;
//notes on type conversion in c++
// int main(){
//     int num1;
//     double num2;
//     num1 = num2; // implicit conversion
//     num1 = (int)num2; // explicit conversion
//     num1 = int(num2); // explicit conversion

//     string str = "123.456";
//     int num_int = stoi(str); // string to int
//     int num_float = stof(str); // string to float
//     int num_double = stod(str); // string to double

//     int num11 = 123;
//     double num22 = 18.99;
//     string st1 = to_string(num11); // int to string
//     string st2 = to_string(num22); // double to string
// }

int main(){
    string st1 = "43.22";
    double dSt1 = stod(st1); // string to double
    cout << dSt1 << endl;
    float fSt1 = stof(st1); // string to float
    cout << fSt1 << endl;
    int iSt1 = stoi(st1); // string to int
    cout << iSt1 << endl;
    
    int N1 = 20;
    string sN1 = to_string(N1); // int to string
    cout << sN1 << endl;

    double N2 = 33.5;
    string sN2 = to_string(N2); // double to string
    cout << sN2 << endl;
    
    float N3 = 55.23;
    string sN3 = to_string(N3); // float to string
    cout << sN3 << endl;
    int iN3 = (int)N3; // float to int
    cout << iN3 << endl;
    return 0;    
}