#include<bits/stdc++.h>

using namespace std;

long long jump(long long a, long long b, long long k) {
	long long ans = 0;
	if (k % 2 == 0) {
		ans += (k / 2) * a;
		ans -= (k / 2) * b;
		return ans;
	} else {
		ans += ((k + 1) / 2) * a;
		ans -= ((k - 1) / 2) * b;
		return ans;
	}
}

int main() {
	int cases;
	cin >> cases;
	while(cases--) {
		long long x, y, z;
		cin >> x >> y >> z;
		cout << jump(x, y, z) << endl;
	}
}
