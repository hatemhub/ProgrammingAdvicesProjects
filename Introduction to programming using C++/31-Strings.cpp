#include <bits/stdc++.h>
using namespace std;

int main() {
cout <<"please enter string1: ";
string s1;
getline(cin,s1);
cout <<"please enter string2: ";
string s2;
cin>>s2;
cout <<"please enter string3: ";
string s3;
cin>>s3;
cout <<"the length of string1 is: " << s1.length() << endl;
cout << "characters at 0,2,4,7 are: " << s1[0] << s1[2] << s1[4] << s1[7] << endl;
cout << "string2 + string3 is: " << s2 + s3 << endl;
float sum = stof(s2) * stof(s3);
cout << "the sum of string2 and string3 is: " << sum << endl;
return 0;
}