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

    w(tt) {
        int n;
        string s;

        cin >> n >> s;

        int ans = 1;

        for(int i = 1; i < 2 * n; i++) {
            if(s[i - 1] == '(' && s[i] == '(') {
                ans++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
