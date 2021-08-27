#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int cur = 0;
	for (int i = 0; i < n; i++) {
		// check if the sum of 'cur' and the mininum between 8 and 'a[i]' is >= k
		if (cur + min(8, a[i]) >= k) {
			// if yes, then output the current index plus one (1) (1-based)
			cout << i + 1 << '\n';
			// terminate the program
			return 0;
		}
		// otherwise, add 8 or 'a[i]' (if smaller than 8) to 'cur'
		cur += min(8, a[i]);
		// check if the 'a[i]' candies is greater than 8
		if (a[i] > 8 && i + 1 < n) {
			// if yes, then transfer the difference between 'a[i]' candies and 8 to the next day
			a[i + 1] += (a[i] - 8);
		}
	}
	// output -1 if it is impossible to reach 'k'
	cout << -1 << '\n';
	return 0;
}
