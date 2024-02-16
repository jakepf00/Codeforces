#include<bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        int num;
        cin >> num;
        vector<int> containers;
        int total = 0;
        while (num--) {
            int water;
            cin >> water;
            containers.push_back(water);
            total += water;
        }
        total /= containers.size();
        int excess = 0;
        for (auto i : containers) {
            excess += (i - total);
            if (excess < 0) {
                cout << "NO" << endl;
                break;
            }
        }
        if (excess >= 0) cout << "YES" << endl;
    }
}