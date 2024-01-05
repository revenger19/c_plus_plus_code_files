/*
Description

You are given an array of N integers. The frequency of exactly one integer is odd. Find that integer.


Input Format

The first line of the input contains one integer T - the number of test cases. Then T test cases follow.

The first line of each test case contains one integer N - the length of the array. 

The second line of each test case contains N space-separated integers.


Output Format

For each test case, print the integer with odd frequency.


Constraints

1≤ T ≤ 106

1≤ N ≤ 106  (N is odd)

-109≤ Ai ≤ 109

It is guaranteed that the sum of N over all test cases does not exceed 106


Sample Input 1

3
5
2 5 5 7 2
3
2 1 2
5
0 1 2 1 0

Sample Output 1

7
1
2
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    // taking the input, number of tests
    int n;
    cin >> n;
    int arr_1[n];
    for (int m = 0; m < n; m++) {
        for (int i = 0; i < n; i++) {
        //taking input, number of test cases per test
        int test_cases;
        cin >> test_cases;
        // creating array to store the test cases 
        int arr[test_cases];
        // storing the test cases
        for (int j = 0; j < test_cases; j++) {
            cin >> arr[j];
        }
        // going through each entry in the array 
        for (int k = 0; k < test_cases; k++) {
            int count = 0;
            for (int l = 0; l < test_cases; l++) {
                if (arr[l] == arr[k]) {
                    count ++;
                } 
                }
            if (count > 1) {
                count =arr_1[n];    
            }
                }
            }
    }

    // printing the result for all the tests 
    cout << endl;
    for (int o = 0; o < n; o++) {
        cout << arr_1[o] << " ";
    }
    cout << endl;
        }

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
}