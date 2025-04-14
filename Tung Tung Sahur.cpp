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

    // https://codeforces.com/contest/2094/problem/D

    w(x) {

        string p, s; cin >> p >> s;

        bool f = true;

        int i = 0, j = 0;

        while (i < p.size()) {
            char curr = p[i];
            int cnt1 = 0;
            while (i < p.size() && p[i] == curr) {
                cnt1++;
                i++;
            }
            int cnt2 = 0;
            while (j < s.size() && s[j] == curr) {
                cnt2++;
                j++;
            }
            if (cnt2 < cnt1 || cnt2 > 2 * cnt1) {
                f = false;
                break;
            }
        }
        if (j != s.size()) {
            f = false;
        }

        if (f) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}