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

    // https://codeforces.com/contest/1948/problem/B

    w(x) {
        int n; cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool f = true;

        for (int i = n - 1; i > 0 && f; i--) {
            if (a[i] < a[i - 1]) {
                if (a[i - 1] < 10) {
                    f = false;
                } else {
                    int rem = a[i - 1] % 10;
                    if (rem < (a[i - 1] / 10) || rem > a[i]) {
                        f = false;
                    } else {
                        a[i - 1] /= 10;
                    }
                }
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