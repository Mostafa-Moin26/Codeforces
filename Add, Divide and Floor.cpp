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
        int n; cin >> n;

        vector<int> ramji(n);

        for(int i = 0; i < n; i++) cin >> ramji[i];

        sort(ramji.begin(), ramji.end());

        if(n == 1) {
            cout << 0 << "\n";
            continue;
        }

        int a = ramji[0], b = ramji[n - 1];

        vector<int> v;

        while(a != b) {
            if(a & 1) {
                v.pb(1);
                a = (a + 1) / 2;
                b = (b + 1) / 2;
            } else {
                v.pb(0);
                a /= 2;
                b /= 2;
            }
        }
        cout << v.size() << "\n";

        if((int)v.size() <= n) {
            for(int i = 0; i <(int)v.size();i++) cout << v[i] << " ";
            cout << "\n"; 
        }
    }
    return 0;
}
