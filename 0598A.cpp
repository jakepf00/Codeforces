#include<bits/stdc++.h>
using namespace std;
 
int main() {
	int cases;
	cin >> cases;
	while (cases--) {
		long long a, b, n, s;
		cin >> a >> b >> n >> s;
		if (a * n + b < s) cout << "NO" << endl;
		else {
			s %= n;
			if (b < s) cout << "NO" << endl;
			else cout << "YES" << endl;
		}
	}
}
