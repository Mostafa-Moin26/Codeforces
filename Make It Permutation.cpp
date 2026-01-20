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

    w(t) {
        int n, c, d;
        cin >> n >> c >> d;

        vector<int> v(n);
        map<int,int> ase;

        for(int &it : v) {
            cin >> it;
            ase[it] = 1;
        }

        sort(v.begin(), v.end());

        int prev = 0;

        for(auto &it : ase) {
            it.ss += prev;
            prev = it.ss;
        }

        int ans = n * c + d;

        for(int i = 0; i < n; i++) {
            ans = min(ans, (n - ase[v[i]]) * c + (v[i] - ase[v[i]]) * d);
        }
        
        cout << ans << "\n";
    }
    return 0;
}
