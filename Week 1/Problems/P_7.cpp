#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    char grade[n];
    for (int i = 0; i < n; i++) {
        int mid_term, end_term, makeup;
        cin >> mid_term >> end_term >> makeup;
        int total_score = mid_term + end_term;
        if (mid_term == -1 or end_term == -1) {
            grade[i] = 'F';
        }
        else {
            if (total_score >= 80) {
                grade[i] = 'A';
            }
            else if (total_score >= 65 and total_score < 80) {
                grade[i] = 'B';
            }
            else if (total_score >= 50 and total_score < 65) {
                grade[i] = 'C';
            }
            else if (total_score >= 30 and total_score < 50 and makeup >= 50) {
                grade[i] = 'C';
            }
            else if (total_score >= 30 and total_score < 50) {
                grade[i] = 'D';
            }
            else if (total_score < 30) {
                grade[i] = 'F';
            }
        }
    }
    // printing the result
    for (int j = 0; j < n; j++) {
        cout << grade[j] << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
}