#include <bits/stdc++.h>
using namespace std;

int main() {
    int grades[3];
    for (int i = 0; i < 3; i++) {
        cout << "Enter grade " << i + 1 << ": ";
        cin >> grades[i];
    }
    float avg = (grades[0] + grades[1] + grades[2]) / 3.0;
    cout << "Average grade: " << avg << endl;
    return 0;
}