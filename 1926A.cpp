#include<bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        string ab;
        cin >> ab;
        int a = 0, b = 0;
        for (auto i : ab) {
            if (i == 'A') a++;
            else b++;
        }
        if (a > b) cout << "A" << endl;
        else cout << "B" << endl;
    }
}