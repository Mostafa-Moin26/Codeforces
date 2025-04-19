#include <bits/stdc++.h>
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

signed main() {
    Mostafa

    // https://codeforces.com/contest/1904/problem/B

    w(x) {
        int n; cin >> n;
        vector<int> a(n), ans(n, 0), pre(n, 0);
        map<int, queue<int>> mp;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]].push(i);
        }

        vector<int> b = a;
        sort(b.begin(), b.end());

        for (int i = 0; i < n; i++) {
            pre[i] = b[i];
            if (i > 0) pre[i] += pre[i - 1];
        }

        int idx = 0;

        for (int i = 0; i < n; i++) {
            if (i > idx) idx = i;

            while (idx < n - 1 && pre[idx] >= b[idx + 1]) {
                idx++;
            }

            int original_idx = mp[b[i]].front();
            mp[b[i]].pop();
            ans[original_idx] = idx;
        }

        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
