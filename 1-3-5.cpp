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
    // https://codeforces.com/problemset/problem/1958/A
    // convert this into kotlin

    w(x) {
        int n; cin >> n;

        int ans;

        if (n < 8 && n != 5) {
            ans = n % 3;
        } else {
            ans = 0;
        }

        cout << ans << endl;

    }
    return 0;
}