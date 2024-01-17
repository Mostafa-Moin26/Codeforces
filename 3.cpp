
#include<bits/stdc++.h>

using namespace std;

#define w(x)            int x;cin>>x;while(x--)
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll              long long
#define pb              push_back
#define ff              first
#define ss              second
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)

int main() {

    Mostafa
        // https://codeforces.com/contest/1920/problem/B

    w(x) {
        int n, k, x; cin >> n >> k >> x;

        vector<int> a(n + 1), pref(n + 1, 0);

        for (int i = 1; i <= n; ++i) cin >> a[i];

        sort(a.begin(), a.end());

        for (int i = 1; i <= n; ++i) pref[i] = pref[i - 1] + a[i];

        int ans = INT_MIN;

        for (int i = n - k; i <= n; ++i)
            ans = max(ans, pref[max(0, i - x)] - (pref[i] - pref[max(0, i - x)]));

        cout << ans << endl;
    }

    return 0;
}