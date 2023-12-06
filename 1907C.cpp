#include<bits/stdc++.h>
using namespace std;

int main() {
	int cases;
    cin >> cases;
    while (cases--) {
        int len;
        string word;
        cin >> len >> word;
        map<char, int> freq;
        for (auto i : word) {
            freq[i]++;
        }
        int max = 0;
        for (auto i : freq) {
            if (i.second > max) max = i.second;
        }
        int remaining = len - max;
        int ans;
        if (remaining > max) ans = 0;
        else ans = max - remaining;
        if (ans == 0 && len % 2 == 1) ans = 1;
        cout << ans << endl;
    }
}
