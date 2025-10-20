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

    // https://codeforces.com/contest/2154/problem/A

    w(t) {
        int n, k; cin >> n >> k;

        string s; cin >> s;

        bool firstOne = true;
        int cnt = 0;
        int dummy = k - 1;

        for (int i = 0; i < n; i++) {

            if (s[i] == '1') {
                if (firstOne || dummy <= 0) {
                    cnt++;
                }
                if (firstOne) firstOne = false;

                dummy = k - 1;
            } else {
                dummy--;
            }

        }

        cout << cnt << endl;
    }
    return 0;
}