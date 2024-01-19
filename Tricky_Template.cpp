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

    // https://codeforces.com/contest/1922/problem/A
    w(x) {
        int n; cin >> n;

        string a, b, c; cin >> a >> b >> c;

        bool flag = false;

        for (int i = 0; i < n; ++i) {
            if (c[i] != a[i] && c[i] != b[i]) {
                flag = true;
                break;
            }
        }

        if (flag) cout << "Yes" << "\n";
        else cout << "No" << "\n";
    }

    return 0;
}