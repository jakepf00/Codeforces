#include<bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        vector<int> a;
        int n;
        cin >> n;
        while (n--) {
            int num;
            cin >> num;
            a.push_back(num);
        }

        int sameBegin = 1;
        for (int i = 1; i < a.size(); i++) {
            if (a[i] != a[i-1]) break;
            sameBegin++;
        }

        int sameEnd = 1;
        for (int i = a.size() - 2; i >= 0; i--) {
            if (a[i] != a[i+1]) break;
            sameEnd++;
        }

        if (a[0] == a[a.size() - 1] && sameBegin < a.size()) sameBegin += sameEnd;

        cout << min(a.size() - sameBegin, a.size() - sameEnd) << endl;
    }
}