#include<bits/stdc++.h>

using namespace std;

#define w(x)            int x;cin>>x;while(x--)
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll              long long
#define pb              push_back
#define ff              first
#define ss              second
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)

int main() {

    Mostafa

    // https://codeforces.com/contest/1916/problem/B

    w(x) {
        int a, b; cin >> a >> b;

        if (b % a) {
            cout << a / __gcd(a, b) * b << '\n';
        } else {
            cout << b * (b / a) << '\n';
        }
    }

    return 0;
}