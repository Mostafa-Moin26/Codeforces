#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define PI 3.141592653589793238462
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define int              long long
#define pb              push_back
#define ff              first
#define ss              second
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)

signed main() {
    Mostafa

    // https://codeforces.com/problemset/problem/1997/B

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        string a, b;
        cin >> a >> b;

        int res = 0;
        for (int i = 0; i < n - 2; i++) {

            if (a[i] != b[i] && a[i] == a[i + 2] && b[i] == b[i + 2] && a[i + 1] == '.' && b[i + 1] == '.') {
                res++;
            }
        }

        cout << res << endl;
    }
    return 0;
}