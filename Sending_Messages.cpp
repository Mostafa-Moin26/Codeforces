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

    // https://codeforces.com/contest/1921/problem/C

    w(x) {
        ll n, f, a, b; cin >> n >> f >> a >> b;

        vector<ll> arr(n);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int idx = 0;

        bool flag = true;

        for (int i = 0; i < n; ++i) {

            f -= min((arr[i] - idx) * a, b);
            idx = arr[i];
            if (f < 1) {
                flag = false;
                break;
            }


        }

        if (flag) cout << "Yes" << "\n";
        else cout << "No" << "\n";
    }

    return 0;
}