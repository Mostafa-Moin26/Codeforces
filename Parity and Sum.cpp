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
bool comp(int a, int b) {return a > b;}
signed main() {
    Mostafa

    // https://codeforces.com/problemset/problem/1993/B

    w(x) {
        int n; cin >> n;
        vector<int> a(n), even;
        int mx = -1;

        for (int i = 0; i < n; i++) {
            cin >> a[i];

            if (a[i] & 1) {
                mx = max(mx, a[i]);
            } else {
                even.pb(a[i]);
            }
        }

        int ans = even.size();

        if (ans == n || ans == 0) {
            cout << 0 << endl;
            continue;
        }

        sort(even.begin(), even.end(), comp);
        while (!even.empty()) {

            if (mx > even.back()) {
                mx += even.back();
            } else {
                ans++;
                break;
            }
            even.pop_back();
        }

        cout << ans << endl;
    }
    return 0;
}