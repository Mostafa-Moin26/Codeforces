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
        string r; 
        cin >> r;
        int n = r.size();


        int cnt = 0; 
        if (r[0] == 'u') {
            r[0] = 's';
            cnt++;
        }
        if (r[n - 1] == 'u') cnt++;

        for (int i = 1; i < r.size() - 1; i++) {
            if (r[i] == 'u' && r[i - 1] == 'u') {
                r[i] = 's';
                cnt++;
            }
        }

        cout << cnt << "\n"; 
    }
    return 0;
}