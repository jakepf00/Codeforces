#include <iostream>

using namespace std;

int main() {
    string first, last, ans;
    cin >> first >> last;

    char thing = last[0];

    ans.push_back(first[0]);

    first.erase(0,1);

    for(auto i : first) {
        if (i < thing) {
            ans.push_back(i);
        } else {
            ans.push_back(thing);
            cout << ans << endl;
            return 0;
        }
    }

    ans.push_back(thing);
    cout << ans << endl;
    return 0;
}
