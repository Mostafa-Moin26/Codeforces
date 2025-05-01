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

    // https://codeforces.com/contest/2104/problem/A

    w(x) {
        int a, b, c; cin >> a >> b >> c;

        int sum = a + b + c;

        if (sum % 3 != 0) {
            cout << "No" << endl;
        } else {

            int val = sum / 3;

            if (a < val) {
                int need = val - a;
                a += need;
                c -= need;

            }
            if (b < val) {
                int need = val - b;
                b += need;
                c -= need;
            }

            if (a != val || b != val || c != val) {
                cout << "No" << endl;
            } else {
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}