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

    vector<int> fact(15);

    fact[0] = fact[1] = 1;

    for (int i = 2; i < 15; i++) {
        fact[i] = fact[i - 1] * i;
    }

    w(t) {
        int n;
        cin >> n;
        int ans = LLONG_MAX;

        for(int i = 0; i < (1 << 14); i++) {

            int sum = 0;

            for(int j = 0; j < 15; j++) {

                if(i & (1 << j)) sum += fact[j + 1];
            }

            if(sum <= n) {
                int res = setbits(n - sum) + setbits(i);
                ans = min(ans, res);
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
