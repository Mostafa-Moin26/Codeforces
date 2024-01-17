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

// https://codeforces.com/contest/1921/problem/A/


    w(x) {

        int x1, y1, x, y; cin >> x1 >> y1;

        int ans;

        for (int i = 1; i <= 3; ++i) {
            cin >> x >> y;

            if (x == x1) ans = abs(y1 - y) * abs(y1 - y);
        }

        cout << ans << endl;
    }

    return 0;
}