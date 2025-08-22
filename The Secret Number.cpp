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

signed main() {
    Mostafa

    // https://codeforces.com/contest/2132/problem/B
    
    w(t) {
        int n;
        cin >> n;
        vector<int> ans, p(19, 1);

        for (int i = 1; i <= 18; i++) {
            p[i] = p[i - 1] * 10;
        }
        
        for (int k = 1; k <= 18; k++) {
            
            if (p[k] + 1 > n) break;
            
            if (n % (p[k] + 1) == 0) {
                ans.pb(n / (p[k] + 1));
            }
        }
        
        if (ans.empty()) {
            cout << 0 << "\n";
        } else {
            sort(ans.begin(), ans.end());
            cout << ans.size() << "\n";
            for (auto x : ans) cout << x << " ";
            cout << "\n";
        }
    }

    return 0;
}