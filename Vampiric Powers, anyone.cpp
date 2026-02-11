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
        cin >> n;

        vector<int> a(n + 5);
        
        int cnt[300];
        memset(cnt, 0, sizeof cnt);

        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        a[0] = 0;
        for(int i = 1; i <= n; i++) {
            a[i] = a[i - 1] ^ a[i];
        }

        int ans = 0;
        cnt[0] = 1;

        for(int i = 1; i <= n; i++) {
            for(int j = 0; j < 256; j++) {
                if(!cnt[j]) continue;
                ans = max(ans, a[i] ^ j);
            }
            cnt[a[i]]++;
        }

        cout << ans << "\n";
    }

    return 0;
}
