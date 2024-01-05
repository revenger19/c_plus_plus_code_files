/*
Description

You are given two integers, A and B. You have to swap them. Don’t just print B and A. You have to assign A as B and B as A.


Input Format

The first line of the input contains one integer T - the number of test cases. Then T test cases follow.

The first line of each test case contains two space-separated integers, A and B.


Output Format

For each test case, print the new values of A and B on a new line.


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

3 2
-10 -5
142 14215
-141 51

*/


#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[2*n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i] >> arr[2*n - i - 1];
    }

    //swaping the two numbers
    // int temp;
    // for (int i = 0; i < n; i++) {
    //     temp = arr[i];
    //     arr[i] = arr[2*n - i - 1];
    //     arr[n - i] = temp;
    // }
    // //printing the swapped numbers
    for (int i = 0; i < n; i++){
        cout << arr[2*n - i - 1] << " " << arr[i] << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
}