#include<bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        int b;
        int total = 0;
        bool hasDiv = false;
        cin >> b;
        while (b--) {
            int c;
            cin >> c;
            total += c;
            if (c % 3 == 1) hasDiv = true;
        }
        if (total % 3 == 0) cout << 0 << endl;
        else if (total % 3 == 2 || hasDiv) cout << 1 << endl;
        else cout << 2 << endl;
    }
}