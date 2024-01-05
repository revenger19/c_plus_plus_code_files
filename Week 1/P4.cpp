/*
Given a number N. Print the summation of the numbers that is between 1 and N (inclusive).

Input:
3

Output:
6

Range:
1 <= N <= 10^9
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    // since the range in 10^9, will use int.
    int n;
    cin >> n;
    long long sum = (n*(n+1))/2;
    cout << sum << endl;
}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
}