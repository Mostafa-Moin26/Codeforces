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

    // https://codeforces.com/contest/484/problem/A

    w(x) {

        ll l, r; cin >> l >> r;

        for (int i = 0; i < 61; ++i) {

            if ((l | (1ll << i)) <= r) {
                l |= (1ll << i);
            }
        }

        cout << l << endl;
    }

    return 0;
}