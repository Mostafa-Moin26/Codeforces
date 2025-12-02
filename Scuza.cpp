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
        int n,q; cin >> n >> q;

        vector<int> v(1), s(1);

        for(int i = 1; i <= n; i++){
            int x;
            cin>>x;
            v.push_back(x);
            s.push_back(s[i-1] + x);
            v[i] = max(v[i], v[i-1]);
        }

        while(q--){
            int x;
            cin >> x;
            int p = upper_bound(v.begin(), v.end(), x) - v.begin() - 1;
            cout << s[p] <<" ";
        }
        cout <<"\n";
    }
    return 0;
}
