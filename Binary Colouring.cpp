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

    // https://codeforces.com/problemset/problem/1977/B

    w(x) {
        int n; cin >> n;
        vector<int> a(32, 0); 

        for (int i = 0; i < 32; i++) {
            if (1 & (n >> i)) {
                a[i] = 1;
            }
        }
        cout << 32 << endl;
        for (int i = 0; i < 31; i++) {

            if (a[i] == 1 && a[i + 1] == 1) {
                a[i] = -1;
                i++;
                while (a[i] == 1) {
                    a[i] = 0;
                    i++;
                }
                a[i] = 1;
                i--;
            }
        }

        for (int i = 0; i < 32; i++) {
            cout << a[i] << " ";
        }
        cout << endl;

    }
    return 0;
}