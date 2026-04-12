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

signed main() {
    Mostafa

    // https://codeforces.com/problemset/problem/1826/C

    w(t) {

        int n, m;
        cin >> n >> m;

        if (n == 1 || m == 1) {
            cout << "Yes\n";
            continue;
        }

        if (n <= m) {
            cout << "No\n";
            continue;
        }

        bool ok = 1;

        for(int i = 2; i * i <= n; i++) {
            if (n % i == 0 && i <= m) {
                ok = 0;
                break;
            }
        }

        if (ok) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }

    }

    return 0;
}