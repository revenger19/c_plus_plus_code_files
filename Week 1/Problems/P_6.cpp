/*
Description

You are given an integer N and a decimal number M. M can be represented as Y.Z where . is the decimal point and N as X. You have to find (Z+X).(Y+X)


Input Format

The first line of the input contains one integer T - the number of test cases. Then T test cases follow.

The first line of each test case contains one integer N and a decimal number M.


Output Format

For each test case, print the value of (Z+X).(Y+X)


Constraints

1≤ T ≤ 106

1≤ N, M ≤ 109


Sample Input 1

3
14 1.2
3 4.5
31 0.143

Sample Output 1

16.15
8.7
174.31

Note

For the first test case, X = 14, Y = 1, Z = 2. So ans = (2+14).(1+14) = 16.15

For the second test case, X = 3, Y = 4, Z = 5. So ans = (5+3).(4+3) = 8.7

For the third test case, X = 31, Y = 0, Z = 143. So ans = (143+31).(0+31) = 174.31
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        string test_case;
        for (int j = 0; j < test_case.length(); j++) {
            if (test_case[j] == '.') {
                int Y = test_case
            }
        }

    }
}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
}