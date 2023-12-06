#include<bits/stdc++.h>
using namespace std;

int main() {
	int cases;
	cin >> cases;
	while (cases--) {
		char a, b;
		cin >> a >> b;
		for (int i = '1'; i <= '8'; i++) {
			if (i == b) continue;
			cout << static_cast<char>(a) << static_cast<char>(i) << endl;
		}
		for (int i = 'a'; i <= 'h'; i++) {
			if (i == a) continue;
			cout << static_cast<char>(i) << static_cast<char>(b) << endl;
		}
	}
}
