#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define PI 3.141592653589793238462
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define w(x)            int x;cin>>x;while(x--)
#define int             long long
#define pb              push_back
#define ff              first
#define ss              second
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)


bool comp(int a, int b) {
    return a > b;
}
signed main() {
    Mostafa

    // https://codeforces.com/contest/2133/problem/B
     
    w(t){
        int n; cin >> n;

        vector<int> a(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i]; 
        }

        sort(a.begin(), a.end(), comp);

        int ans = 0;
        for(int i = 0; i < n; i += 2){
            ans += a[i]; 
        } 
        cout << ans << endl;
    }
    return 0;
}