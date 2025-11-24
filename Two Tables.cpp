#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define PI 3.141592653589793238462
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define w(x)            int x;cin>>x;while(x--)
#define int             long long
#define pb              push_back
#define ff              first
#define ss              second
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)

void solve() {
    int W, H, x1, y1, x2, y2, w, h;
    cin >> W >> H >> x1 >> y1 >> x2 >> y2 >> w >> h;

    int l = INT_MAX, r = INT_MAX, u = INT_MAX, d = INT_MAX;

    if ((x2 - x1) + w <= W) {
        l = max(0LL, w - x1);
        r = max(0LL, x2 - (W - w));
    }

    if ((y2 - y1) + h <= H) {
        u = max(0LL, h - y1);
        d = max(0LL, y2 - (H - h));
    }

    int res = min({l, r, u, d});

    if (res == INT_MAX) {
        cout << -1 << "\n";
    } else {
        cout << res << "\n";
    }
}

signed main() {
    Mostafa
    w(t) {
        solve();
    }
    return 0;
}
