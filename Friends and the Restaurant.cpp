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
        int n; cin >> n;

        vector<int> v1(n), v2(n), v(n);

        for(int i = 0; i < n; i++) cin >> v1[i];

        for(int i = 0; i < n; i++) cin >> v2[i];

        for(int i = 0; i < n; i++) v[i] = v2[i] - v1[i];

        sort(v.begin(), v.end());

        int l = 0, r = n - 1, ans = 0;

        while(l < r) {
            if(v[l] + v[r] >= 0){
                ans++;
                l++; r--;
            } else {
                l++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
