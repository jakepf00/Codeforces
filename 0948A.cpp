#include <bits/stdc++.h>

using namespace std;

vector<vector<char>> thing;
int x, y;

bool checkSafe(int a, int b, int maxA, int maxB) {
    if (a - 1 >= 0) {
        if (thing[a - 1][b] == 'W') return false;
    }
    if (a + 1 < maxA) {
        if (thing[a + 1][b] == 'W') return false;
    }
    if (b - 1 >= 0) {
        if (thing[a][b - 1] == 'W') return false;
    }
    if (b + 1 < maxB) {
        if (thing[a][b + 1] == 'W') return false;
    }
    return true;
}

void addDogs(int a, int b, int maxA, int maxB) {
    if (a - 1 >= 0) {
        if (thing[a - 1][b] == '.') thing[a - 1][b] = 'D';
    }
    if (a + 1 < maxA) {
        if (thing[a + 1][b] == '.') thing[a + 1][b] = 'D';
    }
    if (b - 1 >= 0) {
        if (thing[a][b - 1] == '.') thing[a][b - 1] = 'D';
    }
    if (b + 1 < maxB) {
        if (thing[a][b + 1] == '.') thing[a][b + 1] = 'D';
    }
}

int main() {
    cin >> x >> y;
    thing.resize(x, vector<char>(y));
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cin >> thing[i][j];
        }
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            if (thing[i][j] == 'S') {
                if (!checkSafe(i, j, x, y)) {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            if (thing[i][j] == 'S') {
                addDogs(i, j, x, y);
            }
        }
    }

    cout << "Yes" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << thing[i][j];
        }
        cout << endl;
    }
}
