/*
Description

You are given an array A. One random element is removed from A to form array B and one random element is removed from B to form array C. You have to find the missing element in B and the missing element in C.


Input Format

The first line of the input contains one integer T - the number of test cases. Then T test cases follow.

The first line of each test case contains one integer N - the length of the array. 

The second line of each test case contains N space-separated integers - array A.

The third line of each test case contains (N-1) space-separated integers - array B.

The fourth line of each test case contains (N-2) space-separated integers - array C.


Output Format

For each test case, print the missing element in B and the missing element in C.


Constraints

1 ≤ T ≤ 106

2 ≤ N ≤ 106

It is guaranteed that the sum of N over all the test cases does not exceed 106.

0 ≤ Ai ≤ 109


Sample Input 1

3
4
1 3 5 2
5 1 3
5 1
5
1 3 5 1 0
3 1 1 5
1 1 5
3
1 2 3
3 1
1

Sample Output 1

2 3
0 3
2 3
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[2*n];
    for (int i = 0; i < n; i++) {
        int size;
        cin >> size;
        int ar1[size];
        int count_1 = 0;
        // taking input for array 1
        for (int j = 0; j < size; j++) {
            cin >> ar1[j];
            count_1 = count_1 + ar1[j];
        }
        int ar2[size - 1];
        int count_2 = 0;
        // taking input for array 2
        for (int k = 0; k < (size - 1); k++) {
            cin >> ar2[k];
            count_2 = count_2 + ar2[k];
        }
        int ar3[size - 2];
        int count_3 = 0;
        // taking input for array 3
        for (int l = 0; i < (size - 2); l++) {
            cin >> ar3[l];
            count_3 = count_3 + ar3[l];
        }
        // finding out the missing element in ar2
        int ME_2 = count_1 - count_2;
        int ME_3 = count_2 - count_3;
        cout << ME_2 << " " << ME_3 << endl;
        // arr[i] = ME_2;
        // arr[(2*n)-i-1] = ME_3;
    }

    // printing the values
    // for (int m = 0; m < n; m++) {
    //     cout << arr[m] << " " << arr[2*n - m - 1] << endl;
    // }
}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
}