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

signed main() {
    Mostafa

    w(t) {

        int n, m;
        cin >> n >> m;

        n %= m;

        int g = __gcd(n, m);

        int a = m / g, b = n / g;

        if(__builtin_popcount(a) > 1) {
            cout << "-1\n";
        } else {
            cout << (__builtin_popcount(b) * m - n) << "\n";
        }
    }

    return 0;
}