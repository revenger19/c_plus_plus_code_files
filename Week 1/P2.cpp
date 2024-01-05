/*
Problem 2:
Given two numbers X and Y. Print the summation and multiplication and subraction of these 2 numbers. 

Input:
5 10 

Output:
5 + 10 = 15
5 * 10 = 50
5 - 10 = -5

Range: X,Y ( 1 <= X,y <= 10^5)a
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n' // this will prevent some errors 

void solve() {
    long long x, y;
    cin >>x >> y;
    cout << x << " + " << y << " = " << x + y << endl;
    cout << x << " * " << y << " = " << x * y << endl; // option 2: keep it int and change 1LL*x*y
    cout << x << " - " << y << " = " << x - y << endl;
    // Integer has a limit of 2.1 X 10^9 
    // So, the product will overflow! 
    // Hence, use long long. It has the limit of 10^19
}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
}