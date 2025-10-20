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

    // https://codeforces.com/contest/2154/problem/B

    w(t) {
        int n; cin >> n;

        vector<int> a(n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        int cnt = 0;
        int mx = a[1];

        if (a[1] >= a[2]) cnt++;

        for (int i = 2; i <= n; i++) {
            if (i & 1 && a[i] >= mx) {
                cnt += (a[i] - (mx - 1));
            }
            mx = max(mx, a[i]);
        }

        cout << cnt << endl;
    }
    return 0;
}