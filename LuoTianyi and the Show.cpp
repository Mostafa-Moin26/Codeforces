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
    int n, m; cin >> n >> m;

    int a = 0, b = 0;
    set<int> c;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        if (x == -1) a++;
        else if (x == -2) b++;
        else c.insert(x - 1);
    }

    vector<int> prefix(m + 1, 1);
    prefix[0] = 0;

    for (int x : c) prefix[x + 1]--;
    for (int i = 1; i <= m; i++) prefix[i] += prefix[i - 1];

    int ans = min(prefix[m], max(a, b));

    for (int i : c) {
        ans = max(ans, min(prefix[i], a) + min(prefix[m] - prefix[i], b));
    }

    cout << (int)c.size() + ans << '\n';
}

signed main() {
    Mostafa

    w(t) {
        solve();
    }
    return 0;
}
