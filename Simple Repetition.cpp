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

bool isPrime(int n) {

    if (n < 2) return false;

    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0) return false;

    return true;
}
signed main() {
    Mostafa

    // https://codeforces.com/contest/2093/problem/C

    w(x) {
        int x, k; cin >> x >> k;

        if (k == 1) {
            cout << (isPrime(x) ? "Yes" : "No")<< endl;
        } else if (x == 1 && k == 2) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}