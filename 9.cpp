
#include<bits/stdc++.h>

using namespace std;

#define w(x)            int x;cin>>x;while(x--)
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll              long long
#define pb              push_back
#define ff              first
#define ss              second
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)

int main() {

    Mostafa

    // https://codeforces.com/contest/1921/problem/B

    w(x) {
        int n; cin >> n;

        string s, f; cin >> s >> f;

        int rmv, add;
        rmv = add = 0;

        for (int i = 0; i < n; ++i) {

            if (s[i] == '1') {
                if (f[i] == '0') rmv++;
            }

            if (f[i] == '1') {
                if (s[i] == '0') add++;
            }
        }

        cout << max (rmv, add) << endl;
    }

    return 0;
}