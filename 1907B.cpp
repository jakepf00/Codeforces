#include<bits/stdc++.h>
using namespace std;

int main() {
	int cases;
    cin >> cases;
    while (cases--) {
        string a;
        cin >> a;
        string ans = "";
        stack<int> lowers;
        stack<int> uppers;
        for (int i = 0; i < a.length(); i++) {
            if (a[i] == 'b') {
                if (lowers.empty()) continue;
                int loc = lowers.top();
                lowers.pop();
                ans[loc] = ' ';
            }
            else if (a[i] == 'B') {
                if (uppers.empty()) continue;
                int loc = uppers.top();
                uppers.pop();
                ans[loc] = ' ';
            }
            else if (isupper(a[i])) {
                ans.push_back(a[i]);
                uppers.push(ans.length() - 1);
            }
            else {
                ans.push_back(a[i]);
                lowers.push(ans.length() - 1);
            }
        }
        for (auto i : ans) if (i != ' ') cout << i;
        cout << endl;
    }
}