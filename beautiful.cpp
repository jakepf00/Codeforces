#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x, l;
    cin >> x;

    for (int k = 8; k > 0; k--) {
        l = k - 1;
        int m = ((pow(2, k) - 1) * (pow(2, l)));

        if ((x % m) == 0) {
            cout << m << endl;
            return 0;
        }
    }
}
