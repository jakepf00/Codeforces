#include <bits/stdc++.h>

using namespace std;

int main() {
    bool changed = false;
    int x, y;
    char board[9][9];
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> board[i][j];
        }
    }

    cin >> x >> y;
    x--;
    y--;

    if ((x % 3 == 0) && (y % 3 == 0)) { // top left
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == '.') {
                    board[i][j] = '!';
                    changed = true;
                }
            }
        }
    } else if ((x % 3 == 0) && (y % 3 == 1)) { // mid left
        for (int i = 0; i < 3; i++) {
            for (int j = 3; j < 6; j++) {
                if (board[i][j] == '.') {
                    board[i][j] = '!';
                    changed = true;
                }
            }
        }
    } else if ((x % 3 == 0) && (y % 3 == 2)) { // bottom left
        for (int i = 0; i < 3; i++) {
            for (int j = 6; j < 9; j++) {
                if (board[i][j] == '.') {
                    board[i][j] = '!';
                    changed = true;
                }
            }
        }
    } else if ((x % 3 == 1) && (y % 3 == 0)) { // top mid
        for (int i = 3; i < 6; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == '.') {
                    board[i][j] = '!';
                    changed = true;
                }
            }
        }
    } else if ((x % 3 == 1) && (y % 3 == 1)) { // mid mid
        for (int i = 3; i < 6; i++) {
            for (int j = 3; j < 6; j++) {
                if (board[i][j] == '.') {
                    board[i][j] = '!';
                    changed = true;
                }
            }
        }
    } else if ((x % 3 == 1) && (y % 3 == 2)) { // bottom mid
        for (int i = 3; i < 6; i++) {
            for (int j = 6; j < 9; j++) {
                if (board[i][j] == '.') {
                    board[i][j] = '!';
                    changed = true;
                }
            }
        }
    } else if ((x % 3 == 2) && (y % 3 == 0)) { // top right
        for (int i = 6; i < 9; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == '.') {
                    board[i][j] = '!';
                    changed = true;
                }
            }
        }

    } else if ((x % 3 == 2) && (y % 3 == 1)) { // mid right
        for (int i = 6; i < 9; i++) {
            for (int j = 3; j < 6; j++) {
                if (board[i][j] == '.') {
                    board[i][j] = '!';
                    changed = true;
                }
            }
        }
    } else if ((x % 3 == 2) && (y % 3 == 2)) { // bottom right
        for (int i = 6; i < 9; i++) {
            for (int j = 6; j < 9; j++) {
                if (board[i][j] == '.') {
                    board[i][j] = '!';
                    changed = true;
                }
            }
        }
    }


    if (changed == false) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    board[i][j] = '!';
                }
            }
        }
    }


    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << board[i][j];
            if (j % 3 == 2) { cout << " ";}
        }
        cout << endl;
        if (i % 3 == 2) {
            cout << endl;
        }
    }
}

