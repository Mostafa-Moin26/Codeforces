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

    // https://codeforces.com/contest/1920/problem/A

    w(x) {
        int n; cin >> n;
        int a, x;

        int start = -1, end = INT_MAX;
        vector<int> arr;

        while (n--) {
            cin >> a >> x;

            if (a == 1) start = max(start, x);
            if (a == 2) end = min(end, x);
            if (a == 3) arr.pb(x);
        }

        int ans = (end - start) + 1;
        for (auto i : arr) {

            if (i >= start && i <= end) ans--;

        }

        if (ans < 0) cout << 0 << endl;
        else cout << ans << endl;

    }

    return 0;
}