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

void solve() {
    int n; cin >> n;

    vector<int> p(n);

    for (int i = 0; i < n; i++) cin >> p[i];

    int r = 0;

    for (int i = 0; i < n; i++) {
        if (p[min((int)n - 1, r + 1)] <= p[min((int)n - 1, i + 1)]) {
            r = i;
        }
    }

    vector<int> ans;

    for (int i = r + 1; i < n; i++) ans.pb(p[i]);

    ans.pb(p[r]);

    for (int i = r - 1; i >= 0; i--) {
        if (p[i] > p[0]) {
            ans.pb(p[i]);
        } else {
            for (int j = 0; j <= i; j++) ans.pb(p[j]);
            break;
        }
    }
    for (auto e : ans) cout << e << ' ';
    cout << '\n';
}

signed main() {
    Mostafa
    
    w(t) {
        solve();
    }
    return 0;
}
