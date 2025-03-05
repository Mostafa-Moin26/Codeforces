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

    // https://codeforces.com/contest/1997/problem/C

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        int cnt = 0, ans = n;

        for (int i = 1; i < n; i += 2) {

            cnt += s[i] == '(';
        }

        cout << (ans / 2) + 2 * cnt << endl;
    }
    return 0;
}