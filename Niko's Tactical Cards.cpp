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
        int n; cin >> n;
        vector<int> a(n + 1), b(n + 1);

        for (int i = 1; i <= n; i++) {
           cin >> a[i];
        }
        for (int i = 1; i <= n; i++) {
           cin >> b[i];
        }


        int cnt1 = -a[n];
        int cnt2 = b[n];

        for (int i = n - 1; i >= 1; i--) {
         int tmp1 = max(cnt1 - a[i], -b[i] + cnt2);
         int tmp2 = max(cnt2 + a[i], b[i] + cnt1);

         cnt1 = tmp1;
         cnt2 = tmp2;
        }


        cout << max(cnt1, cnt2) << '\n';
    }
    return 0;
}
