#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
	vector<ll> ans;
	ll numbers, total = 0;
	vector<ll> thing;
	cin >> numbers;
	vector<ll> thing2;
	thing2.resize(1000001);
	while(numbers--) {
		ll x;
		cin >> x;
		total += x;
		thing2[x]++;
		thing.push_back(x);
	}
	for (ll i = 0; i < thing.size(); i++) {
		ll newTotal = total - thing[i];
		if (newTotal % 2 == 0) {
			if (newTotal/2 <= 1000000) {
				if (thing[i] == newTotal/2) {
					if (thing2[newTotal/2] >= 2) {
						ans.push_back(i);
					}
				} else {
					if (thing2[newTotal/2] >= 1) {
						ans.push_back(i);
					}
				}
			}
		}
	}
	if (ans.size() != 0) {
		cout << ans.size() << endl;
		for (ll i = 0; i < ans.size(); i++) {
			cout << ans[i] + 1 << " ";
		}
		cout << endl;
	}
	else {
		cout << 0 << endl;
	}
}
