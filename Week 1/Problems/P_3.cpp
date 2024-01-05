/*
Description

You are given two integers A and B. Find their sum.

 


Input Format

The first line of the input contains one integer T - the number of test cases. Then T test cases follow.

The first line of each test case contains two space-separated integers, A and B.

 


Output Format

For each test case, print the sum of A and B on a new line.


Constraints

1 ≤ T ≤ 2*105

-109 ≤ A, B ≤ 109

 


Sample Input 1

4
2 3
-5 -10
14215 142
51 -141
 


Sample Output 1

5
-15
14357
-90
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n];
    int a, b;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        arr[i] = a + b;
    }

    //printing the sum
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
}