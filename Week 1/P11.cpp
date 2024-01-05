/*
Given the boundaries of 2 intervals. Print the boundaries of their intersection.

Input: 
1 15 5 27

2 5 6 12 

Output:
5 15 

-1
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int min1, max1, min2, max2;
    cin >> min1 >> max1 >> min2 >> max2;
    
    if (min(max1, max2) < max(min1, min2)) {
        cout << -1 << endl;
    }
    else {
        cout << max(min1, min2) << " " << min(max1, max2); 
    }
}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
}