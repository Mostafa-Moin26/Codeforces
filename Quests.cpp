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

    // https://codeforces.com/problemset/problem/1914/C

    w(x) {
        int n, k; cin >> n >> k;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int maxExp = 0, mx = 0;
        int sum = 0;

        for (int i = 0; i < n && i < k; i++) {

            if (i < k) {
                sum += a[i];
                mx = max(mx, b[i]);
                maxExp = max(mx * (k - i - 1) + sum, maxExp);
            }

        }

        cout << maxExp << endl;
    }
    return 0;
}