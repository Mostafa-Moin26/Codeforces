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

    // https://codeforces.com/problemset/problem/2182/C

    w(t) {

        int n; 
        cin >> n;

        vector<int> a(n), b(n), c(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i]; 
        }
        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> c[i];
        }

        int ab = 0, bc = 0; 

        for(int i = 0; i < n; i++) {
            
            bool ok = true;

            for(int j = 0; j < n; j++) {
                if (a[j] >= b[(i + j) % n]) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                ab++;
            }
        }

        for(int i = 0; i < n; i++) {

            bool ok = true;

            for(int j = 0; j < n; j++) {
                if (b[j] >= c[(i + j) % n]) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                bc++;
            }
        }

        cout << ab * bc * n << "\n";
    }
    return 0;
}