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

    // https://codeforces.com/contest/2107/problem/B

    w(t) {

        int n, k; cin >> n >> k;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int maxEl = *max_element(a.begin(), a.end());
        int minEl = *min_element(a.begin(), a.end());
        int sum = accumulate(a.begin(), a.end(), 0);
        int cnt = 0;

        for (int i = 0; i < n; i++) {

            if (a[i] == maxEl) {
                cnt++;
            }
        }

        if ((maxEl - minEl > k  && cnt > 1) || sum % 2 == 0 || (maxEl - 1) - minEl > k) {
            cout << "Jerry" << endl;
        } else {
            cout << "Tom" << endl;
        }
    }
    return 0;
}