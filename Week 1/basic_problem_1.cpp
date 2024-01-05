/*
Question 1:
Given N names of people, greet them in the reverse order

Example:

Input: 
2 
Vivek Gupta
Shubham Patil 

Output:
Hi Shubham Patil!
Hi Vivek Gupta!
*/

// Writing the basic code structure
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string arr[n];
    for (int i = 0; i<n; i++) {
        cout << "Hi " <<arr[i]<<" !";
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int _t;cin>>_t;while(_t--)
    solve();
}