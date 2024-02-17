#include<bits/stdc++.h>
using namespace std;

int main() {

    int cases;
    cin >> cases;
    while (cases--) {
        int num;
        cin >> num;
        map<int, int> a;
        int groups = 0;
        while (num--) {
            unsigned int b;
            cin >> b;
            if (a[2147483647 - b] >= 1) {
                a[2147483647 - b]--;
            }
            else {
                a[b]++;
                groups++;
            }
        }
        cout << groups << endl;
    }
}