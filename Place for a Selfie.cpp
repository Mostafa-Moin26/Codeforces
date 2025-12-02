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
    w(t){
        int n, m; cin >> n >> m;

        set<double> k;

        for(int i = 0; i < n; i++){
            int x; cin >> x;
            k.insert((double)x);
        }

        for(int i = 0; i < m; i++){
            double a, b, c;
            cin >> a >> b >> c;

            double root = 2.0 * sqrt(a * c);

            double l = b - root;
            double r = b + root;

            auto it = k.upper_bound(l);

            if(it != k.end() && *it < r){
                cout << "YES\n";
                cout << (long long)(*it) << "\n";
            } else {
                cout <<"NO\n";
            }
        }
    }
    return 0;
}
