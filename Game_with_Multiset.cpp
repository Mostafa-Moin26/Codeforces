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

    // https://codeforces.com/problemset/problem/1913/C

    int a[29] = {0};

    w(x) {
        int t, x; cin >> t >> x;

        if (t == 1) {
            a[x]++;
        } else {
            for (int i = 29; ~i; --i) {
                // x -= min((x >> i), a[i]) << i; we can write like this also

                int val = min((x >> i), a[i]);
                x -= (1 << i) * val;
            }

            if (!x) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }

    return 0;
}