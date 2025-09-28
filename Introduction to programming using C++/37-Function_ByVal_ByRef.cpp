#include <bits/stdc++.h>
using namespace std;

void Swap(int &a, int &b) { //swap is already a function in std namespace so we had to change the name to Swap
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    Swap(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;
    return 0;
}