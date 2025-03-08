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

    // https://codeforces.com/problemset/problem/1971/D

    w(x) {
        string s; cin >> s;

        int cnt = 0;
        int n = s.size();

        for (int i = 0; i < n - 1; i++) {

            if (s[i] != s[i + 1]) {
                cnt++;
            }
        }

        if (cnt == 0) {
            cnt++;
        } else if (cnt == 1) {

            cnt += (s[0] == '1' && s[n - 1] == '0');
        }

        cout << cnt << endl;
    }
    return 0;
}