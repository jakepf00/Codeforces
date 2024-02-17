#include<bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    vector<int> nums;
    long long maxNum = 0;
    while (cases--) {
        long long num;
        cin >> num;
        nums.push_back(num);
        maxNum = (max(num, maxNum));
    }
    unordered_map<int, int> b;
    long long total = 0;
    for (long long i = 0; i <= maxNum; i++) {
        string a = to_string(i);
        for (auto j : a) {
            total += (int) j - '0';
        }
        b[i] = total;
    }
    for (auto i : nums) {
        cout << b[i] << endl;
    }
}