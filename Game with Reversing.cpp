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

    w(t) {
        int n;
        string s, t, c;

        cin >> n >> s >> t;

        c = t;
        reverse(c.begin(), c.end());

        int ans = 0;
        int cnt = 0;

        for(int i = 0; i < n; i++) {
            if(s[i] != t[i]) cnt++;
        }

        if (!cnt) {
            ans = 0;
        } else {
            ans = cnt * 2 - 1 + !(cnt & 1);
        }
   
        cnt = 0;

        for(int i = 0; i < n; i++) {
            if(s[i] != c[i]) cnt++;
        }

        if (!cnt) {
            ans = min(ans, 2ll);
        } else {
            ans = min(ans, cnt * 2 - 1 + (cnt & 1));
        }

        cout << ans << "\n";
    }

    return 0;
}
