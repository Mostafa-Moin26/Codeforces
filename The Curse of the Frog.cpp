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

    // https://codeforces.com/contest/2189/problem/B

    w(t) {

        int n, x; 
        cin >> n >> x;

        int jump = 0; 
        int a, b, c;

        for (int i = 0; i < n; i++) {
            cin >> a >> b >> c;

            jump = max(jump, a * b - c);
            x -= a * (b - 1);
        }

        if (x <= 0) {
            cout << 0 << "\n";
        } else if (jump == 0) {
            cout << -1 << "\n";
        } else {
            cout << (x + jump - 1) / jump << "\n";
        }
    }
    return 0;
}