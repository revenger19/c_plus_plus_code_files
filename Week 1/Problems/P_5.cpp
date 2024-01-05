/*
Description

You are given an integer N with no more than 105 digits. You have to find the sum of its digits.


Input Format

The first line of the input contains one integer T - the number of test cases. Then T test cases follow.

The first line of each test case contains one integer N.


Output Format

For each test case, print the sum of digits on N on a new line.


Constraints

1≤ T ≤ 106

1≤ Number of digits in N ≤ 106

It is guaranteed that the sum of the number of digits in N over all the test cases does not exceed 106.


Sample Input 1

3
12
1561
53453451234567876545676540909890989890987987567654567654567656765678765678765

Sample Output 1

3
13
443

Note

For the first test case, 1+2 = 3

For the second test case, 1+5+6+1 = 13
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string temp;
    getline(cin, temp);
    string arr[n];
    for (int i = 0; i < n; i++) { 
        string x, y, z;
        bool doub = 0;
        bool dot = 0;
        string a;
        getline(cin, a);
        for (int j = 0; j < a.length(); j++) {            
            if (a[j] == ' ') {
                doub = 1;
            }
            else if (a[j] == '.') {
                dot = 1;
            }
            else if (!doub) {
                x += a[j];
            }
            else if (!dot) {
                y += a[j];
            }
            else {
                z += a[j];
            }
        }
        int x1 = stoll(x), y1 = stoll(y), z1 = stoll(z);
        z1 += x1;
        y1 += x1;
        cout << z1 << "." << y1 << "\n";
    }
}
 
signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
}