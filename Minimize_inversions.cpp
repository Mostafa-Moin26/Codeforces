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

    // https://codeforces.com/contest/1918/problem/B

    w(x) {

        int n; cin >> n;

        vector<pair<int, int> > arr(n);

        for (int i = 0; i < n; ++i) cin >> arr[i].ff;
        for (int i = 0; i < n; ++i) cin >> arr[i].ss;

        sort(arr.begin(), arr.end());

        for (auto i : arr) cout << i.ff << " ";

        cout << endl;

        for (auto i : arr) cout << i.ss << " ";

        cout << endl;
    }

    return 0;
}