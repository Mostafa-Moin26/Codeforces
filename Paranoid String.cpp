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

const int N = 1e6 + 10;
int a[N];

signed main() {
    Mostafa

    w(T) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int ans = 0;

        for(int i = 0; i < (int)s.size(); i++) {
            if(s[i] == s[i - 1]) ans++;
            else ans += (i + 1);
        }

        cout << ans << "\n";
    }

    return 0;
}
