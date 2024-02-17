#include<bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        int size;
        cin >> size;
        int numOnes = 0;
        int num = 0;
        while (size--) {
            string row;
            cin >> row;
            if (numOnes == 0) {
                for (auto i : row) {
                    if (i == '1') numOnes++;
                }
            }
            else if (num == 0) {
                for (auto i : row) {
                    if (i == '1') num++;
                }
                if (num == numOnes) cout << "SQUARE" << endl;
                else cout << "TRIANGLE" << endl;
            }
        }
    }
}