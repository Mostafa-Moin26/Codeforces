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

    w(t) {
        int n;
        cin >> n;

        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int l = 0, r = n - 1;
        int mx = n, mn = 1;

        while(l <= r) {

            if(v[l] == mx) {
                l++;
                mx--;

            } else if(v[l] == mn) {
                l++;
                mn++;

            } else if(v[r] == mx) {
                r--;
                mx--;

            } else if(v[r] == mn) {
                r--;
                mn++;

            } else {
                break;
            }
        }

        if ( l <= r) {
            cout << l + 1 << " " << r + 1 << "\n";
        } else {
            cout << -1 << "\n";
        }

    }
    return 0;
}
