#include <bits/stdc++.h>

using namespace std;

int main() {
    double money, thing1, thing2;
    cin >> money >> thing1 >> thing2;


    int q = (int) money;
    int r = (int) thing1;
    if (q % r == 0) {
        cout << "YES" << endl;
        cout << (int) q / r << " " << 0 << endl;
        return 0;
    }

    for (double x = 0; (x * thing1) <= money; x++) {
        double y = (money - (x * thing1)) / thing2;
        if (y == (int) y) {
            cout << "YES" << endl;
            cout << (int) x << " " << (int) y << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
