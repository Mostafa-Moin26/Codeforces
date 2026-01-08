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
        int n,m;
        cin >> n >> m;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                
                if(i % 2 == 0) cout << (n / 2 + i / 2) * m + j + 1 << " ";
                else cout << (i / 2) * m + j + 1 << " ";
            }

            cout << "\n";
        }
    }
    return 0;
}
