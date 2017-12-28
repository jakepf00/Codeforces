#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;

    if (num % 10 == 0) {
        cout << num << endl;
        return 0;
    }

    for (int x = 1; x < 6; x++) {
        if ((num - x) % 10 == 0) {
            cout << (num - x) << endl;
            return 0;
        }
        if ((num + x) % 10 == 0) {
            cout << (num + x) << endl;
            return 0;
        }
    }

    return 0;
}
