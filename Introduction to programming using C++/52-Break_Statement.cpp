#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {10, 20, 44, 55, 33, 22, 99, 88, 99, 100};
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == 20)
        {
            cout << "Found 20 at index " << i << endl;
            break;
        }
        cout << arr[i] << endl;
    }
    return 0;
}