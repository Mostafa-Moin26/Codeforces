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

    // https://codeforces.com/contest/2085/problem/A

    w(x) {
        int n, k; cin >> n >> k;
        string s; cin >> s;

        string rev = s;
        reverse(rev.begin(), rev.end());

        bool isAllCharSame = true;

        for (int i = 1; i < n; i++) {
            if (s[i] != s[0]) {
                isAllCharSame = false;
                break;
            }
        }

        if (rev <= s && (k == 0 || isAllCharSame)) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }
    return 0;
}