#include<bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    while(cases--) {
        int num;
        cin >> num;



        // char 1
        if (num <= 53) {
            cout << 'a';
            num--;
        }
        else {
            char next = 'a' + (num - 52) - 1;
            num -= (num - 52);
            cout << next;
        }

        // char 2
        if (num <= 27) {
            cout << 'a';
            num--;
        }
        else {
            char next = 'a' + (num - 26) - 1;
            num -= (num - 26);
            cout << next;
        }

        // char 3
        cout << static_cast<char>('a' + num - 1) << endl;
    }
}