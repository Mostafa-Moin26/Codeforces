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

void solve() {
    int n; cin >> n;

    vector<int> num(n);

    for(int i = 0; i < n; i++) cin >> num[i];

    int ans = n - 1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {

            if(i == j) continue;
            
            int ct = 0;

            for(int m = 0; m < n; m++){
                if((num[m] - num[i]) * (j - i) != (m - i) * (num[j] - num[i])) ct++;
            }
            ans = min(ans, ct);
        }
    }
    cout << ans << "\n";
}

signed main() {
    Mostafa

    w(t) {
        solve();
    }
    return 0;
}
