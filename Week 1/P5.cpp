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
*/

#include <bits/stdc++.h>
#include <math.h>
using namespace std;

void solve() {
    float A, B;
    cin >> A >> B;
    // floor == gif (greatest integer that is smaller than x)
    cout << "floor " << A << " / " << B << " = " << floor(A/B)<< endl;
    // ceil == smallest integer greater than the given number
    cout << "ceil " << A << " / " << B << " = " << ceil(A/B)<< endl;
    cout << "round " << A << " / " << B << " = " << round(A/B)<< endl;

}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
}