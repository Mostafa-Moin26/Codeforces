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

const int N = 2e5+10;

vector<int> g[N];

int c[N], dp[N];

int dfs(int u) {

    if(dp[u] != -1) {
        return dp[u];
    }

    int sum = 0;

    for(auto v : g[u]) {
        sum += dfs(v);
    }

    dp[u] = min(sum, c[u]);
 
    return dp[u];
}

signed main() {
    Mostafa

    w(t) {

        int n, k;
        cin >> n >> k;

        for(int i = 0; i < n; i++) {
            g[i].clear();
        }

        fill(dp, dp+n, -1);

        for(int i = 0; i < n; i++) {
            cin >> c[i];
        }

        for(int i = 0; i < k; i++) {

            int x;
            cin >> x;

            dp[x - 1] = 0;
        }

        for(int i = 0; i < n; i++) {

            int m;
            cin >> m;

            if(m == 0) {

                if(dp[i] == -1) {
                    dp[i] = c[i];
                }
            } else {

                while(m--) {

                    int x;
                    cin >> x;

                    x--;

                    g[i].pb(x);
                }
            }
        }

        for(int i = 0; i < n; i++) {

            cout << dfs(i);

            if(i + 1 < n) {
                cout << " ";
            }
        }

        cout << '\n';
    }

    return 0;
}