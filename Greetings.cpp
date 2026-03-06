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

signed main() {
    Mostafa

    // https://codeforces.com/problemset/problem/1915/F

    w(t) {
        int n;
        cin >> n;

        map<int,int> mp;
        vector<int> v;

        for(int i = 1; i <= n; i++) {
            int a, b;
            cin >> a >> b;
            v.pb(b);
            mp[a] = b;
        }

        sort(v.begin(), v.end());

        int ans = 0;

        for(auto &it : mp) {
            auto pos = lower_bound(v.begin(), v.end(), it.ss);
            ans += pos - v.begin();
            v.erase(pos);
        }

        cout << ans << "\n";
    }

    return 0;
}
