#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<pair<int, int>> vip;

#define w(x)            int x;cin>>x;while(x--)
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll              long long
#define pb              push_back
#define ff              first
#define ss              second
#define mp              make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)

int main() {

    Mostafa
    // https://codeforces.com/contest/1955/problem/C

    w(x) {
        ll n, k; cin >> n >> k;

        vector<ll> a(n);
        ll sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
        }

        if (sum <= k) {
            cout << n << endl;
            continue;
        }

        ll left = (k + 1) / 2;
        ll right = k / 2;
        ll i = 0;
        while (left >= a[i]) left -= a[i++];
        ll j = n - 1;
        while (right >= a[j]) right -= a[j--];

        // cout << i << " " << j << endl;
        cout << i + n - j - 1 << endl;
    }

    return 0;
}