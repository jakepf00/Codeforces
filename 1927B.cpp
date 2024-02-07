#include<bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        vector<int> used(26, 0);
        string ans = "";
        int num;
        cin >> num;
        while (num--) {
            int a;
            cin >> a;
            for (int i = 0; i < used.size(); i++) {
                if (used[i] == a) {
                    ans += ('a' + i);
                    used[i]++;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
}