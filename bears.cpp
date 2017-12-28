#include <bits/stdc++.h>

using namespace std;

int main() {
    int b1, b2, b3, m;

    cin >> b1 >> b2 >> b3 >> m;

    if (m >= b2) {
        cout << "-1" << endl;
        return 0;
    }

    if (max(b3, m) > (min(b3, m) * 2)) {
        cout << "-1" << endl;
    }
    else {
        cout << 2 * b1 << " " << 2 * b2 << " " << max(b3, m) << endl;
    }
}
