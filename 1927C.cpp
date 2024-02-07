#include<bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    while(cases--) {
        int n, m, k;
        cin >> n >> m >> k;
        deque<int> a;
        deque<int> b;

        while (n--) {
            int c;
            cin >> c;
            a.push_back(c);
        }
        while (m--) {
            int c;
            cin >> c;
            b.push_back(c);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int usedA = 0;
        int usedB = 0;
        for (int i = 1; i <= k; i++) {
            while (a.size() > 0 && a[0] < i) a.erase(a.begin(), a.begin() + 1);
            while (b.size() > 0 && b[0] < i) b.erase(b.begin(), b.begin() + 1);
            if (a[0] != i && b[0] != i) {
                usedA = k;
                break;
            }
            if (a[0] == i && b[0] == i) {}
            else if (a[0] == i) usedA++;
            else usedB++;
        }
        if (usedA > (k/2) || usedB > (k/2)) cout << "no" << endl;
        else cout << "yes" << endl;
    }
}