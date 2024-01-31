#include<bits/stdc++.h>

using namespace std;

#define w(x)            int x;cin>>x;while(x--)
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll              long long
#define pb              push_back
#define ff              first
#define ss              second
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)

int main() {

    Mostafa

    // https://codeforces.com/contest/1918/problem/C

    w(x) {
        ll a, b, r; cin >> a >> b >> r;
        ll x, k; x = k = 0;

        if (a > b) swap(a, b);

        for (int i = 62; ~i; --i) {

            if (a & (1ll << i) || ~b & (1ll << i)) continue;

            if (k++ && (x | 1ll << i) <= r) {
                x |= 1ll << i;
            }
        }

        cout << (b ^ x) - (a ^ x) << endl;
    }

    return 0;
}


// short explaination

// In this approach,
// First I'm ensuring that b is greater or equal a.
// than I'm trying to create x such that (b^x) will be minimum but not less than a
// and (a ^ x) maximum but not greater than a


