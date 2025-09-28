#include <bits/stdc++.h>
using namespace std;

void fillArray(float arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter grade " << (i + 1) << ": ";
        cin >> arr[i];
    }
}

void printAvg(float arr[], int size) {
    float avg = 0;
    for (int i = 0; i < size; i++) {
        avg += arr[i];
    }
    avg /= size;
    cout << "Average grade: " << avg << endl;
}

int main() {
    float grades[3];
    fillArray(grades, 3);
    printAvg(grades, 3);
    return 0;
}