#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	int cur = 0;
	int ans = 0;
	while (n--) {
		int x;
		cin >> x;
		// add 'x' to 'cur'
		cur += x;
		// find the minimum between 8 and 'cur'
		int r = min(8, cur);
		// subtract the minimum between 8 and 'cur' from 'cur' (remaining candies to be passed on)
		cur -= r;
		// subtract the minimum between 8 and 'cur' from 'k'
		k -= r;
		ans++;
		if (k <= 0) {
			// if 'k' is less than or equal to 0, then end the loop
			break;
		}
	}
	cout << (k > 0 ? -1 : ans) << '\n';
	return 0;
}
