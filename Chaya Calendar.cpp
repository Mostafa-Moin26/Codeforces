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

    // https://codeforces.com/contest/1932/problem/B

    w(x) {
        int n; cin >> n;
        int prev = 0;

        for (int i = 0; i < n; i++) {
            int curr; cin >> curr;
            int tmp = curr;

            if (curr <= prev) {
                curr = prev - (prev % curr) + curr;
            }
            prev = curr;
        }

        cout << prev << endl;
    }
    return 0;
}