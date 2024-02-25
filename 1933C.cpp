#include<bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        unordered_set<int> k_vals;
        long long a, b, l;
        cin >> a >> b >> l;
        for (long long x = 0; pow(a, x) <= l; x++) {
            for (long long y = 0; pow(b, y) <= l; y++) {
                if (l % ((long long)pow(a, x) * (long long)pow(b, y)) == 0) k_vals.insert(l / ((long long)pow(a, x) * (long long)pow(b, y)));
            }
        }
        cout << k_vals.size() << endl;
    }
}