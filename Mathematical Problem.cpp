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

    // https://codeforces.com/problemset/problem/1986/D

    w(t) {

        int n;
        cin >> n;

        string s;
        cin >> s;

        int res = 1e5;

        for (int i = 0; i < n - 1; i++) {

            int ans = ((s[i] - '0') * 10 + (s[i + 1] - '0'));

            for (int j = 0; j < n; j++) {

                if (j == i || j == i + 1) {
                    continue;
                }

                ans = min(ans * (s[j] - '0'), ans + (s[j] - '0'));
            }

            res = min(res, ans);
        }

        cout << res << "\n";
    }

    return 0;
}