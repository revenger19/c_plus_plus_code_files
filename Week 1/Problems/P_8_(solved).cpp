#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    IOS
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long int s1 = 0, s2 = 0, s3 = 0;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            s1 += x;
        }
        for (int i = 0; i < n-1; ++i) {
            int x;
            cin >> x;
            s2 += x;
        }
        for (int i = 0; i < n-2; ++i) {
            int x;
            cin >> x;
            s3 += x;
        }
        cout<< s1 - s2 << " " << s2 - s3 << "\n";
    }
    return 0;
}

