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

    // https://codeforces.com/problemset/problem/1991/B
    
    w(x) {
        int n; cin >> n;

        vector<int> b(n-1), a(n);

        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }

        a[0] = b[0];
        a[n - 1] = b[n - 2];

        for (int i = 1; i < n - 1; i++) {
            a[i] = b[i] | b[i - 1];
        }

        bool f = true;

        for (int i = 0; i < n - 1; i++) {
            if ((a[i] & a[i + 1]) != b[i]) {
                f = false;
                break;
            }
        }

        if (f) {
            for (auto i : a) cout << i << " ";
            cout << endl;
        } else {
            cout << -1 << endl;
        }

    }
    return 0;
}