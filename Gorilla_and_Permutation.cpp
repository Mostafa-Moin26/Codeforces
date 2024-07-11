#include<bits/stdc++.h>

using namespace std;

bool comp(int a, int b) {
	return a > b;
}
int main() {

	// https://codeforces.com/contest/1992/problem/C

	int t; cin >> t;

	while (t--) {
		int n, m, k; cin >> n >> m >> k;

		while(n > m) {
			cout << n-- <<" ";	
		}
		int v = 1;
		while (v <= m) {
			cout << v++ << " ";
		}
		cout << endl;
	}

	return 0;
}