#include <bits/stdc++.h>

using namespace std;

int main() {
    string cards;
    cin >> cards;
    int ans = 0;

    for (auto i : cards) {
        switch (i) {
            case 'a': ans++; break;
            case 'e': ans++; break;
            case 'i': ans++; break;
            case 'o': ans++; break;
            case 'u': ans++; break;
            case '1': ans++; break;
            case '3': ans++; break;
            case '5': ans++; break;
            case '7': ans++; break;
            case '9': ans++; break;
        }
    }

    cout << ans << endl;
}
