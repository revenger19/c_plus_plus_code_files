/*
Given two numbers X, Y which denote coordinates of a point in 2D plan.
Determine in which quarter does it belong.

Input: 
4.5 -2.2
0.1 0.1 

Output:
Q4
Q1

Also, denote if they are in any axis or origin.
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    float x, y;
    cin >> x >> y;
    
    if (x == 0 and y == 0) {
        cout << "Origin" << endl;
    }

    else if (x == 0 and y != 0) {
        cout << "Y-axis" << endl;
    }

    else if (x != 0 and y == 0) {
        cout << "X-axis" << endl;
    }

    else if (x > 0 and y > 0) {
        cout  << "Q1" << endl;
    }

    else if (x > 0 and y < 0) {
        cout  << "Q4" << endl;
    }
   
    else if (x < 0 and y > 0) {
        cout  << "Q2" << endl;
    }
   
    else if (x < 0 and y < 0) {
        cout  << "Q3" << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
}
