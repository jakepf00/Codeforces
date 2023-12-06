#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, ans;
    cin >> n;
    n++;

    vector<int> triangle(n, 0);

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n; j++) {
            if (j + i < n) {
                for (int k = j; k < i + j; k++) {
                    triangle[k]++;
                }
            }
        }
    }

    ans = 0;
    for (int i = 0; i < n; i++) {
        if (triangle[i] > ans) {
            ans = triangle[i];
        }
    }
    cout << ans << endl;
}
