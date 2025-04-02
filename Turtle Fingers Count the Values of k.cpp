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

    // https://codeforces.com/problemset/problem/1933/C

    w(x) {
        int a, b, l; cin >> a >> b >> l;

        set<int> ans;

        int val1 = 1;

        for (int x = 0; x < 20 && val1 <= l; x++) {
            int val2 = 1;

            for (int y = 0; y < 20 && val2 <= l; y++) {

                if (l % (val1 * val2) == 0) {
                    ans.insert(l / (val1 * val2));
                }
                val2 *= b;
            }
            val1 *= a;
        }

        cout << ans.size() << endl;
    }
    return 0;
}