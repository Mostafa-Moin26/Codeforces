#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<pair<int, int>> vip;

#define w(x)            int x;cin>>x;while(x--)
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll              long long
#define pb              push_back
#define ff              first
#define ss              second
#define mp              make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)

int main() {

    Mostafa
    // https://codeforces.com/contest/1956/problem/C

    w(x) {
        ll n; cin >> n;

        ll ans =  0;

        for (int i = 1; i <= n; ++i) ans += 1ll * i * (2 * i - 1);

        cout << ans << " " << 2 * n << endl;

        for (int i = n; i > 0; --i) {

            cout << 1 << " " << i << " ";
            for (int j = 1; j <= n; ++j) cout << j << " ";
            cout << endl;

            cout << 2 << " " << i << " ";
            for (int j = 1; j <= n; ++j) cout << j << " ";
            cout << endl;
        }
    }

    return 0;
}