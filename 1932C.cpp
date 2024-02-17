#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        int n, m;
        cin >> n >> m;
        deque<int> a;
        while (n--) {
            int b;
            cin >> b;
            a.push_back(b);
        }

        deque<int> next;
 
        string lr;
        cin >> lr;
        for (auto i : lr) {
            if (i == 'L') {
                next.push_front(a.front());
                a.pop_front();
            }
            else {
                next.push_front(a.back());
                a.pop_back();
            }
        }


        int total = 1;
        deque<int> ans;
        for (auto i : next) {
            total *= i;
            total %= m;
            ans.push_front(total);
        }
        for (auto i : ans) {
            cout << i << " ";
        }
        cout << endl;
    }
}
