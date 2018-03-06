#include <bits/stdc++.h>

using namespace std;

int main() {
    int size, min, distance;
    cin >> size;
    int array[size];
    vector<int> ans;
    bool a = false;

    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    min = array[0];

    for (int i = 0; i < size; i++) {
        if(array[i] < min) {
            min = array[i];
        }
    }

    distance = 1;
    for (int i = 0; i < size; i++) {
        if (array[i] == min) {
            if (a == true) {
                ans.push_back(distance);
                distance = 1;
            } else {
                a = true;
                distance = 1;
            }
        }
        else {
            distance++;
        }
    }

    min = ans[0];
    for (int i = 0; i < ans.size(); i++) {
        if (ans[i] < min) {
            min = ans[i];
        }
    }

    cout << min << endl;

}
