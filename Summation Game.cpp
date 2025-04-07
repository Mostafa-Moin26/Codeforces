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

    // https://codeforces.com/problemset/problem/1920/B

    w(t) {
        int n, k, x; cin >> n >> k >> x; 

        vector<int> a(n);
        int sum = 0, b_sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        sort(a.begin(), a.end());

        for (int i = 0; i < x; i++) {
            b_sum += a[n - i - 1];
        }

        int ans = INT_MIN;

        ans = max(ans, (sum - b_sum) - b_sum);

        for (int i = n - 1; i >= (n - k); i--) {

            sum -= a[i];

            if (i >= x) {
                b_sum += a[i - x];
            }
            b_sum -= a[i];

            ans = max(ans, (sum - b_sum) - b_sum);
        }

        cout << ans << endl;


    }
    return 0;
}