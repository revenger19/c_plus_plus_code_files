/*
Pattern 2:

5 
*****
*...*
*.*.*
*...*
*****

3 
***
*.*
***

7.
*******
*.....*
*.***.*
*.*.*.*
*.***.*
*.....*
*******
n is always odd
*/

#include <bits/stdc++.h>
using namespace std;

void print_cell(int i, int j, int n) {
    int decide = max(abs(i-n/2), abs(j-n/2));
    char ch1 = '*';
    char ch2 = '.';
    if (n%4 == 3) {
        swap(ch1, ch2);
    }
    if ((decide + n/2) % 2 == 0) {
        cout << ch1;
    }
    else {
        cout << ch2;
    }
}

void print_row(int i, int n) {
    for (int j = 0; j <= n; j++) {
        print_cell(i,j,n);
    }
}

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        print_row(1,n);
        cout << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    int t = 1;
    for (int i = 0; i < t; i++) {
        solve();
    }
}

