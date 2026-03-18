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

    // https://codeforces.com/problemset/problem/1844/C

    w(t) {

        int size;
        cin >> size;

        vector<int> a(size);

        int maxi = -1e11;

        for (auto &i : a) {
            cin >> i;
            maxi = max(maxi, i);
        }

        int odd = 0, even = 0;

        for (int i = 0; i < size; i++) {

            if (i & 1) {
                odd += max(a[i], 0LL);
            } else {
                even += max(a[i], 0LL);
            }
        }

        if (odd + even == 0) {
            cout << maxi << endl;
        } else {
            cout << max({odd, even}) << endl;
        }
    }

    return 0;
}