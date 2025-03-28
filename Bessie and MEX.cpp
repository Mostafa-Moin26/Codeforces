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

    // https://codeforces.com/problemset/problem/1942/B

    w(x) {
        int n; cin >> n;

        vector<int> a(n), p(n), visited(n + 1, 0);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int mex = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] >= 0) {
                p[i] = mex;
            } else {
                p[i] = mex - a[i];
            }

            visited[p[i]] = 1;

            while (visited[mex]) mex++;
        }

        for (auto &it : p) {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}