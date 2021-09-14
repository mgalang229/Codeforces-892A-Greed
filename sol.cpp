#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		sum += a;
	}
	vector<int> b(n);
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	sort(b.begin(), b.end());
	// check if the total of volume of all the colas can be accommodated by the 2 largest cans
	cout << (sum <= (long long) b[n - 1] + b[n - 2] ? "YES" : "NO") << '\n';
	return 0;
}
