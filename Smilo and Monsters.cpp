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

    // https://codeforces.com/problemset/problem/1891/C

    w(t) {

        int n;
        cin >> n;

        vector<int> a(n);

        int sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        sort(a.begin(), a.end());

        int s = sum / 2;
        int ans = (sum + 1) / 2;

        for (int i = n - 1; i >= 0; i--) {

            if (s > 0) {
                s -= a[i];
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}