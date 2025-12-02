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
    w(t){
        int n, m; cin >> n >> m;

        vector<string> c(n);

        int ans = 1, o = 0;

        for(int i = 0; i < n; i++){
            cin >> c[i];

            for(int j = 0; j < m; j++){

                if(c[i][j] == '0'){
                    if(i != 0 && c[i-1][j] == '0') ans = 3;
                    if(j != 0 && c[i][j-1] == '0') ans = 3;
                    if(i != 0 && j != 0 && c[i-1][j-1] == '0') ans = 3;
                    if(i != 0 && j != m-1 && c[i-1][j+1] == '0') ans = 3;
                    ans = max(ans, 2ll);
                } else o++;
            }
        }

        if(ans == 3) cout << o << "\n";
        else if(ans == 2) cout << max(o - 1, 0ll) << "\n";
        else cout << max(o - 2, 0ll) << "\n";
    }
    return 0;
}
