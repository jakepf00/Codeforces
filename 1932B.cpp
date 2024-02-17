#include<bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        int num;
        cin >> num;
        deque<int> a;
        while(num--) {
            int b;
            cin >> b;
            a.push_back(b);
        }
        int ans = 1;
        while (a.size() > 0) {
            if (ans % a[0] != 0) ans += (a[0] - (ans % a[0]));
            a.pop_front();
            ans++;
        }
        cout << ans - 1 << endl;
    }
}