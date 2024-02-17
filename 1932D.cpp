#include<bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        int turns;
        cin >> turns;
        char trump;
        cin >> trump;

        deque<string> c, d, h, s;
        turns;
        int numCards = turns * 2;
        while (numCards--) {
            string card;
            cin >> card;
            if (card[1] == 'C') {
                c.push_back(card);
            }
            if (card[1] == 'D') {
                d.push_back(card);
            }
            if (card[1] == 'H') {
                h.push_back(card);
            }
            if (card[1] == 'S') {
                s.push_back(card);
            }
        }
        sort(c.begin(), c.end());
        sort(d.begin(), d.end());
        sort(h.begin(), h.end());
        sort(s.begin(), s.end());

        deque<string> t, x, y, z;

        int trumpNeeded = c.size() % 2 + d.size() % 2 + h.size() % 2 + s.size() % 2;
        if (trump == 'C') {
            t = c;
            x = d;
            y = h;
            z = s;
        }
        if (trump == 'D') {
            t = d;
            x = c;
            y = h;
            z = s;
        }
        if (trump == 'H') {
            t = h;
            x = c;
            y = d;
            z = s;
        }
        if (trump == 'S') {
            t = s;
            x = c;
            y = d;
            z = h;
        }
        trumpNeeded -= t.size() % 2;
        if (trumpNeeded > t.size()) {
            cout << "IMPOSSIBLE" << endl;
            continue;
        }
        while (x.size() > 0) {
            cout << x[0] << " ";
            x.pop_front();
            if (x.size() == 0) {
                cout << t[0] << endl;
                t.pop_front();
            }
            else {
                cout << x[0] << endl;
                x.pop_front();
            }
        }
        while (y.size() > 0) {
            cout << y[0] << " ";
            y.pop_front();
            if (y.size() == 0) {
                cout << t[0] << endl;
                t.pop_front();
            }
            else {
                cout << y[0] << endl;
                y.pop_front();
            }
        }
        while (z.size() > 0) {
            cout << z[0] << " ";
            z.pop_front();
            if (z.size() == 0) {
                cout << t[0] << endl;
                t.pop_front();
            }
            else {
                cout << z[0] << endl;
                z.pop_front();
            }
        }
        while (t.size() > 0) {
            cout << t[0] << " " << t[1] << endl;
            t.pop_front();
            t.pop_front();
        }
    }
}