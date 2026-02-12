#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define PI 3.141592653589793238462
#define Mostafa ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define w(x) int x;cin>>x;while(x--)
#define int long long
#define pb push_back
#define ff first
#define ss second
#define ps(x,y) fixed<<setprecision(y)<<x
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)

signed main() {
    Mostafa

    w(t) {
        int n, m;
        cin >> n >> m;

        vector<string> s(n);
        
        for(int i = 0; i < n; i++) {
            cin >> s[i];
        }

        vector<int> row(n), col(m);
        char c[2] = {'B', 'W'};

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(s[i][j] == 'U') {
                    row[i] ^= 1;
                    int x = row[i];
                    s[i][j] = c[x];
                    s[i + 1][j] = c[!x];
                }

                if(s[i][j] == 'L') {
                    col[j] ^= 1;
                    int x = col[j];
                    s[i][j] = c[x];
                    s[i][j + 1] = c[!x];
                }
            }
        }

        bool ok = true;

        for(int i = 0; i < n; i++) {
            ok &= !row[i];
        }

        for(int i = 0; i < m; i++) {
            ok &= !col[i];
        }

        if(!ok) {
            cout << "-1\n";
            continue;
        }

        for(int i = 0; i < n; i++) {
            cout << s[i] << "\n";
        }
    }

    return 0;
}
