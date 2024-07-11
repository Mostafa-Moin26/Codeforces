#include<bits/stdc++.h>

using namespace std;

int main() {

		// https://codeforces.com/contest/1992/problem/A
	int t; cin >> t;

	while (t--) {

		int a[3]; cin >> a[0] >> a[1] >> a[2];

		sort(a, a + 3);

		for (int i = 0; i < 5; ++i) {

			if (a[0] <= a[1] && a[0] <= a[2]) {
				a[0]++;
			} else if (a[1] <= a[0] && a[1] <= a[2]) {
				a[1]++;
			} else if(a[2] <= a[0] && a[2] <= a[1]) {
				a[2]++;
			}
		}
		cout << a[0] * a[1] * a[2] << endl;
	}
	return 0;
}