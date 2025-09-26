#include <bits/stdc++.h>
using namespace std;

int x = 10; // Global variable

void myFunction() {
    int x = 20; // Local variable in myFunction
    cout << x << endl;
}

int main() {
    int x = 30; // Local variable in main
    cout << x << endl;
    myFunction();
    cout << x << endl;
    cout << ::x << endl; // Accessing global variable
    return 0;
}