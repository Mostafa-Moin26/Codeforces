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
#define ll long long

int main() {

    Mostafa

    // https://codeforces.com/contest/1917/problem/A

    w(x) {

        ll n; cin >> n;

        ll prod = 1, num;

        for (ll i = 0; i < n; ++i) {

            cin >> num;

            if (num < 0) prod *= -1;
            else if (num > 0) prod *= 1;
            else prod = 0;
        }

        if (prod <= 0) cout << 0 << endl;
        else {
            cout << 1 << endl;
            cout << 1 << " " << 0 << endl;
        }
    }

    return 0;
}