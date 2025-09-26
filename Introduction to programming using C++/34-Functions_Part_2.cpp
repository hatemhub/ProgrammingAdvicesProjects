#include <bits/stdc++.h>
using namespace std;

void mySum() {
 int num1, num2, sum;
    cout << "please enter number 1: ";
    cin >> num1;
    cout << "please enter number 2: ";
    cin >> num2;
    sum = num1 + num2;
    cout << "***********\n";
    cout << sum;
}

int mySumFunc() {
    int num1, num2, sum;
        cout << "please enter number 1: ";
        cin >> num1;
        cout << "please enter number 2: ";
        cin >> num2;
        sum = num1 + num2;
        cout << "***********\n";
        return sum;
}
int main() {
mySum();
cout << mySumFunc();
return 0;
}