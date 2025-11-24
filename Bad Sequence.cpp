#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define PI 3.141592653589793238462
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define w(x)            int x;cin>>x;while(x--)
#define int             long long
#define pb              push_back
#define ff              first
#define ss              second
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)

void solve() {
    int n;
    string a;
    cin >> n >> a;

    int b1 = 0, b2 = 0, c = 0;
    for (auto x : a) {
        b1 += (x == '(');
        b2 += (x == ')');
        c  += (x == '(');
        c  -= (x == ')');
        if (c < -1) {
            cout << "No\n";
            return;
        }
    }

    if (b1 != b2) {
        cout << "No\n";
        return;
    }
    cout << "Yes\n";
}

signed main() {
    Mostafa

        solve();

    return 0;
}
