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
        int n, w, h;
        cin >> n >> w >> h;

        vector<int> a(n), b(n);

        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        bool f = false;

        int mx = INT_MAX, mn = INT_MIN;

        for (int i = 0; i < n; i++) {

            mn = max(mn, (b[i] + h) - (a[i] + w));
            mx = min(mx, (b[i] - h) - (a[i] - w));
        }


        if (mn <= mx) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }     
    }
    
    return 0;
}
