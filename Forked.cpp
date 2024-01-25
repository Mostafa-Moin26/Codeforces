#include<bits/stdc++.h>

using namespace std;

#define w(x)            int x;cin>>x;while(x--)
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll              long long

int main() {

    Mostafa

    // https://codeforces.com/problemset/problem/1904/A

    w(x) {
        int a, b, xK, yK, xQ, yQ;
        cin >> a >> b >> xK >> yK >> xQ >> yQ;

        vector<ll> dx = {a, a, b, b, -a, -a, -b, -b};
        vector<ll> dy = {b, -b, a, -a, -b, b, -a, a};

        set < pair<ll, ll>> dexK;
        set < pair<ll, ll>> dexQ;

        for (int i = 0; i < 8; ++i) dexK.insert({xK + dx[i], yK + dy[i]});
        for (int i = 0; i < 8; ++i) dexQ.insert({xQ + dx[i], yQ + dy[i]});

        int ans = 0;

        for (auto i : dexK) {
            if (dexQ.find(i) != dexQ.end()) ans++;
        }

        cout << ans << endl;
    }

    return 0;
}