// Problem link ---->
https://codeforces.com/contest/2013/problem/A

// Solution ---->
#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, a, b;
		cin >> n >> a >> b;
		cout << max((n + a - 1) / a, (n + b - 1) / b) << "\n";
	}
}
