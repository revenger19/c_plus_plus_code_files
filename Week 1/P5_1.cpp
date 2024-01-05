/*
Given 2 numbers A and B. Print floor, ceil and round of A/B

Input: 
10 3

Output:
floor 10/3 = 3
ceil 10/3 = 4
round 10/3 = 3

Range: 
1 <= A,B <= 10^9

Note: Don't use math library 
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int A,B;
    cin >> A >> B;
    cout << "floor " << A << " / " << B << " = " << A/B << endl;
    cout << "ceil " << A << " / " << B << " = " << (A+B -1)/B << endl;
    cout << "round " << A << " / " << B << " = " << ((2*A + B)/(2*B)) << endl;
}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
}