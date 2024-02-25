#include<bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        int nums;
        cin >> nums;
        int total = 0;
        while (nums--) {
            int a;
            cin >> a;
            total += max(a, -a);
        }
        cout << total << endl;
    }
}