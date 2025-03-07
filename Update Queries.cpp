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

    // https://codeforces.com/contest/1986/problem/C

    w(x) {
        int n, m; cin >> n >> m;
        string s, c;
        vector<int> ind(m), a;

        cin >> s;

        for (int i = 0; i < m; i++) {
            cin >> ind[i]; 
        }
        cin >> c;

        sort(ind.begin(), ind.end());

        for (int i = 0; i < m; i++) {
            if (a.empty() || a.back() != ind[i]) {
                a.pb(ind[i]);
            }
        }

        sort(c.begin(), c.end());

        for (int i = 0; i < a.size(); i++) {
            s[a[i] - 1] = c[i];
        }

        cout << s << endl;
    }
    return 0;
}