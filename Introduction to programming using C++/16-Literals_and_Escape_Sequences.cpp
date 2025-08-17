#include <iostream>
using namespace std;

int main() {
    //ring a bell
    cout << "\a"; // \a is the escape sequence for alert (bell)
    
    /*print a text with " and \ */
    cout << "Dear Sir\\Madam,\n \n";
    cout << "How are you?\n\n";
    cout << "My name is \"Hatem\", nice to meet you.\n\n";

    //print names with tab space
    cout << "Ali\tAhmed\tLina\n";
    cout << "Fadi\tZain\tMona\n";

    /* Questions and Answers

1. What is a literal?

A literal is a fixed value written directly in code, such as 10, 3.14, 'A', or "Hello".

2. Can you assign different values to a literal?

No. Literals are constants; their values cannot be changed. You can only assign them to variables.

3. What are literal types?

Integer literals → 5, 100

Floating-point literals → 3.14, 2.0e5

Character literals → 'a', '\n'

String literals → "Hello"

Boolean literals → true, false

4. Why do we need escape sequence literals?

Escape sequences represent special characters (like newline \n, tab \t, backslash \\) inside character or string literals, which cannot be typed directly.
    */
    return 0;
}