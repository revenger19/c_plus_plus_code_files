/*
Given a number R calculate the area of a circle with radius R.
Round off the answer to 9 Decimal Places. 

Input: 
2.00

Output:
12.566370612

Range:
1 <= R <= 100
*/

#include <bits/stdc++.h>
using namespace std;

long double PI = acos(-1);

void solve() {
    // Precision order in float data types
    // float < double < long double
    long double R;
    cin >> R;
    // fixed << setprecision(x) will keep x decimal places
    // setprecision(x) will only keep x digits (including both pre-decimal and post-decimal digits)
    cout << fixed << setprecision(9) <<  PI*R*R << endl;
}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
}