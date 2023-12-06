#include<bits/stdc++.h>
using namespace std;

int main() {
	int cases;
	cin >> cases;
	while(cases--) {
		vector<long long> candies;
		candies.resize(3);
		cin >> candies[0] >> candies[1] >> candies[2];
		long long total = 0;
		sort(candies.begin(), candies.end());
		total += min(candies[2] - candies[1], candies[0]);
		candies[0] -= total;
		candies[2] -= total;
		if (candies[0] == 0 || candies[0] == 1) total += candies[1];
		else {
			total += candies[0];
			total += (candies[1] - (candies[0] / 2));
			if (candies[0] % 2 == 1) total--;
		}
		cout << total << endl;
	}
}
