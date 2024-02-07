#include<bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    while(cases--) {
        int num;
        string thing;
        cin >> num >> thing;

        while (thing.length() > 0 && thing[0] != 'B') {
            num--;
            thing.erase(0, 1);
        }
        while (thing.length() > 0 && thing[thing.length() - 1] != 'B') {
            num--;
            thing.erase(thing.length() - 1, 1);
        }

        cout << num << endl;
    }
}