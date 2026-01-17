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
        int n;
        cin >> n;

        if(n == 1) {
            cout << 1 << "\n";

        } else if(n % 2 == 1) {
            cout << -1 << "\n";

        } else {
            cout << n << " " << n - 1 << " ";

            for(int i = 2; i < n; i += 2) {
                cout << i << " " << n - 1 - i << " ";
            }

            cout << "\n";
        }
    }
    
    return 0;
}
