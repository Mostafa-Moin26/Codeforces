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

    // https://codeforces.com/contest/2094/problem/C

    w(x) {
        int n; cin >> n;

        vector<int> a;
        int sum = 0;
        int num;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cin >> num;

                if (i == 1) {
                    a.pb(num);
                    sum += num;
                } else if (j == n) {
                    a.pb(num);
                    sum += num;
                }
             }
        }
        n *= 2;
        cout << (n * (n + 1) / 2) - sum << " ";
        for (auto it : a) {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}