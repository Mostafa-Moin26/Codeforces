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

void solve(){
    int n;
    cin >> n;
    const int A = 1000000001;

    int minL = A, costL = A;
    int maxR = 0, costR = A;
    int maxLen = 0, costLen = A;

    for(int i = 0; i < n; i++) {
        int l, r, c;
        cin >> l >> r >> c;

        if(l < minL) {
            minL = l;
            costL = A;
        }

        if(l == minL) costL = min(costL, c);

        if(r > maxR) {
            maxR = r;
            costR = A;
        }

        if(r == maxR) costR = min(costR, c);

        if(r - l + 1 > maxLen) {
            maxLen = r - l + 1;
            costLen = A;
        }

        if(r - l + 1 == maxLen) costLen = min(costLen, c);

        int ans = costL + costR;

        if(maxLen == maxR - minL + 1) ans = min(ans, costLen);
        
        cout<<ans<<"\n";
    }
}

signed main() {
    Mostafa

    w(t) {
        solve();
    }
    return 0;
}
