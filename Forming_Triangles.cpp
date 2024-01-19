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

    // https://codeforces.com/contest/1922/problem/B

    w(x) {
        ll n; cin >> n;

        vector<ll> arr(n);
        map<ll, ll> mp;

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];

            mp[arr[i]]++;
        }

        sort(arr.begin(), arr.end());

        ll ans = 0;

        for (auto i : mp) {

            ll k = i.ss;
            ans += k * (k - 1) * (k - 2) / 6;
            int idx = lower_bound(arr.begin(), arr.end(), i.ff) - arr.begin();
            ans += (k * (k - 1) / 2) * idx;
        }

        cout << ans << endl;
    }

    return 0;
}