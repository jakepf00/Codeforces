#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> intervals;
    intervals.push_back(a);
    intervals.push_back(b);
    intervals.push_back(c);

    sort(intervals.begin(), intervals.end());

    if (intervals[0] == 1) {
        cout << "YES" << endl;
        return 0;
    } else if (intervals[1] == 2) {
        cout << "YES" << endl;
        return 0;
    } else if ((intervals[0] == 3) && (intervals[1] == 3) && (intervals[2] == 3)) {
        cout << "YES" << endl;
        return 0;
    } else if ((intervals[0] == 2) && (intervals[1] == 4) && (intervals[2] == 4)) {
        cout << "YES" << endl;
        return 0;
    }

    cout << "NO" << endl;
}
