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
    // https://codeforces.com/contest/1941/problem/A


    w(x) {
        int n, m, k; cin >> n >> m >> k;
        int a1[n], a2[m];

        for (int i = 0; i < n; ++i) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; ++i) {
            cin >> a2[i];
        }

        int ans = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {

                ans += a1[i] + a2[j] <= k;
            }
        }

        cout << ans << endl;
    }

    return 0;
}