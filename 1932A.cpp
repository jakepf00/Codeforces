#include<bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        int ans = 0;
        int len;
        cin >> len;
        string path;
        cin >> path;
        if (path[0] == '@') ans++;
        for (int i = 1; i < path.length(); i++) {
            if (path[i] == '*' && path[i - 1] == '*') break;
            else if (path[i] == '@') ans++;
        }
        cout << ans << endl;
    }
}