#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define PI 3.141592653589793238462
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define w(x)            int x;cin>>x;while(x--)
#define int              long long
#define pb              push_back
#define ff              first
#define ss              second
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)

signed main() {
    Mostafa

    // https://codeforces.com/problemset/problem/1976/B

    w(x) {
        int n; cin >> n;
        vector<int> a(n), b(n + 1);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i <= n; i++) {
            cin >> b[i];
        }

        int ans = 1, mn = INT_MAX;

        for (int i = 0; i < n; i++) {
            ans += abs(a[i] - b[i]);

            if (b[n] >= min(a[i], b[i]) && b[n] <= max(a[i], b[i])) {
                mn = 0;
            }

            mn = min(mn, min(abs(a[i] - b[n]), abs(b[i] - b[n])));
        }

        cout << ans + mn << endl;


    }
    return 0;
}