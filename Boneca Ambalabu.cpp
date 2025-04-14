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

    // https://codeforces.com/contest/2094/problem/E

    w(x) {
        int n; cin >> n;
        vector<int> a(n);
        int mx = -1; 

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> bits(30);
        for (int i = 0; i < 30; i++) {

            for (int j = 0; j < n; j++) {

                if (a[j] & (1 << i)) {
                    bits[i]++;
                }
            }
        }

        int mxSum = 0;

        for (int i = 0; i < n; i++) {

            int sum = 0;

            for (int j = 0; j < 30; j++) {

                if (a[i] & (1 << j)) {
                    sum += (1 << j) * (n - bits[j]);
                } else {
                    sum += (1 << j) * bits[j];
                }
            }
            mxSum = max(mxSum, sum);
        }

        cout << mxSum << endl;
        
    }
    return 0;
}