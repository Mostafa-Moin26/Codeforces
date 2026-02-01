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

        int ans = 0;

        for(int x = 0; x < n; x++) {
            int m = x * x;
            int sum = (x * (x + 1) * (2 * x + 1)) / 6;

            for(int i = 1; i <= n - x; i++) {
                sum += (x + i) * (n + 1 - i);
                m = max(m, (x + i) * (n + 1 - i));
            }

            ans = max(ans, sum - m);
        }

        cout << ans << "\n";
    }

    return 0;
}
