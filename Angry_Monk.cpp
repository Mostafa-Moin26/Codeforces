#include<bits/stdc++.h>

using namespace std;

bool comp(int a, int b) {
	return a > b;
}
int main() {

	// https://codeforces.com/contest/1992/problem/B

	int t; cin >> t;

	while (t--) {
		int n, k; cin >> n >> k;

		vector<int> a(k);

		for (int i = 0; i < k; ++i) cin >> a[i];

		sort(a.begin(), a.end(), comp);

	    int cnt = 0;

	    for (int i = 1; i < k; ++i) {
	    	if (a[i] == 1) {
	    		cnt++;
	    	}else {
	    		cnt += (a[i] - 1) + a[i];
	    	}
	    }

	    cout << cnt << endl;
	}

	return 0;
}