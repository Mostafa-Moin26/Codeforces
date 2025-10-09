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

    // https://codeforces.com/contest/2145/problem/B

    w(t) {
        int n, k; cin >> n >> k;

        string s; cin >> s;

        if (n == k) {
            for (int i = 0; i < n; i++) {
                cout <<'-';
            }
            cout << endl;
            continue;
        }

        vector<char> ans(n, '0');

        int cnt = 0;
        int first = 0, last = n - 1;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '2') {
                cnt++;
            } else if (s[i] == '0') {
                ans[first++] = '-';
            } else {
                ans[last--] = '-';
            }
        }

        for (int i = 0; i < cnt; i++) {
            if (ans[first] == '0') {
                ans[first] = '?';
                first++;
            }
            if (ans[last] == '0') {
                ans[last] = '?';
                last--;
            }
        }
  
        while (first <= last) {
            ans[first] = '+';
            first++;
        }

        for (int i = 0; i < n; i++) {
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}