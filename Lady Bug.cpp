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

    // https://codeforces.com/problemset/problem/2092/B

    w(x) {
        int n; cin >> n;
        string a, b; cin >> a >> b;

        int a_evenOnes = 0, a_oddOnes = 0;
        int b_evenZeros = 0, b_oddZeros = 0;

        for (int i = 0; i < n; i++) {

            if (i & 1) {
                if (a[i] == '1') a_oddOnes++;
                if (b[i] == '0') b_oddZeros++;
            } else {
                if (a[i] == '1') a_evenOnes++;
                if (b[i] == '0') b_evenZeros++;
            }
        }

        if (a_evenOnes > b_oddZeros || a_oddOnes > b_evenZeros) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}