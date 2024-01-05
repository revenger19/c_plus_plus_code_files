/*
Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case. 

Input:      Output:
a           ALPHA
            IS SMALL

9           IS DIGIT

            ALPHA IS
A           CAPITAL
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {

    // information to remember:
    // Digits (0-9): 48-57
    // Lowercase Letters (a-z): 97-122
    // Uppercase Letters (A-Z): 65-90
    char ch;
    cin >> ch;
    if (ch >= '0' and ch <= '9') {
        cout << "IS DIGIT";
    }

    else if (ch >= 'a' and ch <= 'z') {
        cout << "ALPHA" << endl << "IS SMALL";
    }

    else if (ch >= 'A' and ch <= 'Z') {
        cout << "ALPHA" << endl << "IS CAPITAL" << endl;
    }

    // To convert, small letters into capital letters
    // ch - 'a' + 'A'
}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
}