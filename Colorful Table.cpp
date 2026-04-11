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

const int N = 100001;

int a[N], b[N];
bool v[N];
vector<int> pos[N];

signed main() {
    Mostafa

    // https://codeforces.com/problemset/problem/1870/C

    w(t) {

        int n, k;
        cin >> n >> k;

        int p = 1, q = n;

        for(int i = 1; i <= k; i++) {
            pos[i].clear();
        } 

        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            pos[a[i]].pb(i);
            v[i] = 0;
        }

        for(int i = 1; i <= k; i++) {

            if(pos[i].empty()) {
                b[i] = 0;
                continue;
            }

            while(v[p]) p++;
            while(v[q]) q--;

            b[i] = 2 * (q - p + 1);

            for(int j = 0; j < pos[i].size(); j++) {
                v[pos[i][j]] = 1;
            }
        }

        for(int i = 1; i <= k; i++) {
            cout << b[i] << " ";
        }

        cout << '\n';
    }

    return 0;
}