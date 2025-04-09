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

    // https://codeforces.com/contest/2093/problem/B

    w(x) {
        string s; cin >> s;
        int ans = 0;

        int idx = s.size() - 1; 

        while (idx >= 0 && s[idx] == '0') {
            idx--;
            ans++;
        }

        for (int i = 0; i < idx; i++) {
            if (s[i] != '0') {
                ans++;
            }
        }

        cout << ans << endl;

    }
    return 0;
}