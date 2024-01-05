/*
Given 3 numbers A,B and C. Print the minimum and the maximum numbers

Input: 
-1 -2 -3 

Output:
-3 -1

Range:
-10^5 <= A,B,C <= 10^5
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int A, B, C;
    cin >> A >> B >> C;
    // method: 1
    cout << min(A, min(B,C)) << " " << max(A, max(B,C)) << endl;
    // method: 2 
    cout << min({A, B, C}) << " " << max({A, B, C}) << endl;
}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
}