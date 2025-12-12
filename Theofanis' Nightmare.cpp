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

signed main(){
    Mostafa

    w(t) {
        int n; cin >> n;

        vector<int> x(n);
        
        for(int i = 0; i < n; i++) cin >> x[i];

        int a = 0, b = 0;

        for(int i = 0; i < n; i++){
            a += x[i];
            b = a;
        }

        for(int i = 0; i < n; i++){
            a -= x[i];
            if(a > 0) b += a;
        }

        cout << b << '\n';
    }
    return 0;
}
