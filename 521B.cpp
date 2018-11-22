#include<bits/stdc++.h>

using namespace std;

int main() {
	int houses;
	cin >> houses;
	int prev2, prev, current;
	cin >> prev2 >> prev;
	int disturbed = 0;
	houses -= 2;
	while(houses--) {
		cin >> current;

		if (current && prev2 && !prev) {
			disturbed++;
			current = 0; // shuts off lights
		}

		prev2 = prev;
		prev = current;
	}
	cout << disturbed << endl;
}
