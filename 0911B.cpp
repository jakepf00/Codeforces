#include <bits/stdc++.h>

using namespace std;

int main() {
    double n, a, b;
    cin >> n >> a >> b;

    double aPlateRatio = a / (b + a);
    double bPlateRatio = b / (a + b);
    double aPlates0 = aPlateRatio * n;
    double bPlates0 = bPlateRatio * n;

    int aPlates = (int) round(aPlates0);
    int bPlates = (int) round(bPlates0);

    if (aPlates == 0) {
        aPlates++;
        bPlates--;
    } else if (bPlates == 0) {
        bPlates++;
        aPlates--;
    }

    int ans = min((a / aPlates), (b / bPlates));
    cout << ans << endl;
}
