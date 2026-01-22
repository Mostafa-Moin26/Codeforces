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

signed main() {
    Mostafa

    w(t) {
        int n;
        double d, h;
        cin >> n >> d >> h;

        vector<int> x(n);

        for(int i = 0; i < n; i++) cin >> x[i];

        sort(x.begin(), x.end());

        double ans = d * h;

        for(int i = 0; i < n - 1; i++) {

            ans += d * h;
            double dh = x[i] + h - x[i + 1];

            if(dh > 0) ans -= dh * (dh * d / h);
        }

        cout << fixed << setprecision(6) << ans / 2 <<"\n";
    }

    return 0;
}
