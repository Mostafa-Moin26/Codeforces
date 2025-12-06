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

        string s; cin >> s;

        int cnt = 0;

        int i = 0; 

        while (s[i] == '0' && i < n) {
            cnt++, i++;
        }

        int tmp = 0;
        while (i < n) {

            if (s[i] == '1') {
                tmp = k;
            } else {
                if (tmp == 0) cnt++;
                if (tmp > 0) {
                    tmp--;
                }
            }


            i++;
        }

        cout << cnt << endl;
    }
    return 0;
}