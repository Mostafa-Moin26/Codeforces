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

signed main(){
    Mostafa

    w(t) {
        int n, m, d;
        cin >> n >> m >> d;

        vector<int> p(n + 1), pos(n + 1), a(m);

        for(int i = 0; i < n; i++) {
            cin >> p[i];
            pos[p[i]] = i;
        }

        for(int i = 0; i < m; i++) cin >> a[i];

        int ans = n - 1;

        for(int i = 0; i < m - 1; i++) {

            int pos1 = pos[a[i]], pos2 = pos[a[i + 1]];

            if(pos2 < pos1 || pos2 > pos1 + d) {
                ans = 0;
                break;
            } else {
                if(d < n - 1) {
                    ans = min(ans, min(pos2 - pos1, pos1 + d - pos2 + 1));
                } else {
                    ans = min(ans, pos2 - pos1);
                }
            }
        }
        cout << ans << "\n";
    }
    
    return 0;
}
