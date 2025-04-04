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

    // https://codeforces.com/contest/2086/problem/B

    w(x) {
        int n, k, x; cin >> n >> k >> x; 
        x--;

        vector<int> a(n);
        int sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        int val = x / sum;
        int rem = x % sum;
        int pos; 

        for (int i = n - 1; i >= 0; i--) {

            if (rem >= 0) {
                rem -= a[i];
                pos = i + 1;
            }
        }

        if (val >= k) {
            cout << 0 << endl;
        } else {
            cout << (k - val - 1) * n + pos << endl;
        }
    }
    return 0;
}