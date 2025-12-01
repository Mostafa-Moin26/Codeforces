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
        int n, k;
        cin >> n >> k;

        vector<pair<int,int>> a(n);

        for(int i = 0; i < n; i++) cin >> a[i].second;
        for(int i = 0; i < n; i++) cin >> a[i].first;

        sort(a.begin(), a.end());

        int h = 0;
        int i;

        for (i = 0; i < n && k > 0;) {

            h += k;

            while (a[i].second <= h && i < n) i++;

            k -= a[i].first;
        }

        if (i == n) {
            cout << "Yes" << '\n';
        } else {
            cout << "No" << '\n';
        }
    }

    return 0;
}
