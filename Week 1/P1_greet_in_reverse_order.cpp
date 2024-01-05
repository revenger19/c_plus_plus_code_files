/*
Problem 1: 
Given N names of people, greet them in the reverse order
Input:
2 
Vivek Gupta 
Shubham Patil

Output:
Hi Shubham Patil
Hi Vivek Gupta
*/

// Start with the basic coding template provided by AZ
#include <bits/stdc++.h>
using namespace std;

void solve () {
    int n;
    cin >> n;
    string temp;
    getline(cin, temp);

    string arr[n];
    for (int i = 0; i < n; i++) {
        getline(cin, arr[i]);
    }
    for (int i = n-1; i >= 0; i--) {
        cout << "Hi " << arr[i] << " !" << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
}