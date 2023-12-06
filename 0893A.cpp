#include <iostream>

using namespace std;

int main() {
    int numGames, winner, player1 = 1, player2 = 2, spectator = 3;

    cin >> numGames;

    for (int i = 0; i < numGames; i++) {
        cin >> winner;
        if ((winner != player1) && (winner != player2)) {
            cout << "NO" << endl;
            return 0;
        }
        else {
            if (winner == player1) {
                int x = player2;
                player2 = spectator;
                spectator = x;
            } else {
                int x = player1;
                player1 = spectator;
                spectator = x;
            }
        }
    }

    cout << "YES" << endl;
    return 0;
}
