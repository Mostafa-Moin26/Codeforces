#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define PI 3.141592653589793238462
#define Mostafa ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define w(x) int x;cin>>x;while(x--)
#define int long long
#define pb push_back
#define ff first
#define ss second
#define ps(x,y) fixed<<setprecision(y)<<x
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)

signed main() {
    Mostafa

    w(t) {
        int n;
        cin >> n;

        vector<int> a;
        a.pb(n);

        int x = 1;
        int m = n;

        while(x < m) {
            if((x & m) != 0) {
                a.pb(m - x);
                m -= x;
            }
            x <<= 1;
        }

        while(m > 1) {
            a.pb(m >> 1);
            m >>= 1;
        }

        int k = a.size();
        cout << k << "\n";

        for(auto i : a) {
            cout << i << " ";
        }

        cout << "\n";
    }

    return 0;
}
