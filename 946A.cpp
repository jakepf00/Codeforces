#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b = 0, c = 0, d;
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> d;
        if (d > 0) b += d;
        else c += d;
    }
    cout << b - c << endl;
}
