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
        int n,c;
        cin >> n >> c;
        vector<vector<int>> cards(c, vector<int>(n));

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < c; j++) {
                cin >> cards[j][i];
            }
        }

        for(int i = 0; i < c; i++) {
            sort(cards[i].begin(), cards[i].end());
        }

        int cnt = 0;

        for(int i = 0; i < c; i++) {
            int cum = 0;

            for(int j = 0; j < n; j++) {
                int x = cards[i][j] * j - cum;
                cnt += x;
                cum += cards[i][j];
            }
        }

        cout << cnt <<"\n";
    }
    
    return 0;
}
