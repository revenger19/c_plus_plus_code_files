/*
Given 4 numbers A,B,C and D. If A^B > C^D
Print "YES" otherwise, print "NO".

Input:              Output:
3 2 5 4             NO
5 2 4 2             YES
5 2 5 2             NO

Range:
(1 <= A, C <= 10^7), (1 <= B, D <= 10^12)
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long double A, B, C, D;
    cin >> A >> B >> C >> D;
    if (B*log10(A) > D*log10(C)) {
        cout << "YES";
    }

    else {
        cout << "NO";
    }
}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
}