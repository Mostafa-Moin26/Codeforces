#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define PI 3.141592653589793238462
#define Mostafa ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define w(x) int x; cin >> x; while (x--)
#define int long long
#define pb push_back
#define ff first
#define ss second
#define ps(x, y) fixed << setprecision(y) << x
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)

signed main() {
    Mostafa

    // https://codeforces.com/problemset/problem/1995/B1

    w(x) {
        int n, m; cin >> n >> m;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int idx = 0, sum = 0, res = 0;

        for (int i = 0; i < n; i++) {
            sum += a[i];

            while (sum > m || a[i] - a[idx] > 1 && idx < n) { 
                sum -= a[idx];
                idx++;
            }

            res = max(res, sum);
        }

        cout << res << endl;
    }
    return 0;
}
