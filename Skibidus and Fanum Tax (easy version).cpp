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

    // https://codeforces.com/problemset/problem/2065/C1

    w(x) {
        int n, m; cin >> n >> m;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int val; cin >> val;

        if (n == 1) {
            cout << "Yes" << endl;
            continue;
        }

        bool f = true;
        if (val - a[0] < a[0]) {
            a[0] = val - a[0];
        }

        for (int i = 1; i < n && f; i++) {
            int diff = val - a[i];
            if (diff < a[i] && diff >= a[i - 1]) {
                a[i] = diff;
            }

            if (a[i] < a[i - 1] && diff > a[i]) {
                a[i] = diff;
            }

            if (a[i] < a[i - 1]) {
                f = false;
            }
        }

        if (f) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}