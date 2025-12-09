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
        int n, m; cin >> n >> m;

        cout << (m == 1 ? 0 : min(n + 1, m)) << '\n';

        if(m == 1) {
            for(int i = 0; i < n; i++) cout << "0\n";
        }else {
            for(int i = 1; i <= min(n, m - 1); i++) {
                for(int j = 0; j < m; j++) cout << (i + j - 1) % m << " \n"[j == m - 1];
            }
            for(int i = min(n + 1, m); i <= n; i++){
                for(int j = 0; j < m; j++) cout << j << " \n"[j == m-1];
            }
        }
    }
    return 0;
}
