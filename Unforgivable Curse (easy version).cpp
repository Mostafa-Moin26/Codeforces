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
        int n, k; cin >> n >> k;

        string s1,s2; cin >> s1 >> s2;

        string s11 = s1, s22 = s2;

        sort(s11.begin(), s11.end());
        sort(s22.begin(), s22.end());

        if(s11 != s22) {
            cout << "NO\n";
            continue;
        }

        bool ok = true;

        for(int i = 0; i < n; i++) {
            if(i - k < 0 && i + k >= n && s1[i] != s2[i]) {
                ok = false;
                break;
            }
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
