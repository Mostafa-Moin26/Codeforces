#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define PI 3.141592653589793238462
#define Mostafa ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define w(x) int x;cin>>x;while(x--)
#define int long long
#define pb push_back
#define ff first
#define ss second
#define ps(x,y) fixed<<setprecision(y)<<x
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)

void solve() {
    string s;
    cin >> s;

    int m;
    cin >> m;

    string l, r;
    cin >> l >> r;

    vector<vector<int>> a(10);

    for(int i = 0; i < (int)s.size(); i++) {
        a[s[i] - '0'].pb(i);
    }

    int now = -1;

    for(int i = 0; i < m; i++) {
        int g = 0;

        for(int j = l[i] - '0'; j <= r[i] - '0'; j++) {
            auto k = upper_bound(a[j].begin(), a[j].end(), now);

            if(k == a[j].end()) {
                cout << "YES" << endl;
                return;
            }

            g = max(g, *k);
        }

        now = g;
    }

    cout << "NO" << endl;
}

signed main() {
    Mostafa

    w(t) {
        solve();
    }

    return 0;
}
