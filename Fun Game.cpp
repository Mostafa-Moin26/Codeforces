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

    // https://codeforces.com/contest/1994/problem/B

    w(x) {
        int n; cin >> n;
        string s, t; cin >> s >> t;

        int idx = -1;

        for (int i = 0; i < n; i++) {
            if (t[i] == '1') {
                idx = i;
                break;
            }
        }

        if (idx == -1) {
            cout << "Yes" << endl;
            continue;
        }

        bool f = false;
        for (int i = 0; i <= idx; i++) {
            if (s[i] == '1') {
                f = true;
                break;
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