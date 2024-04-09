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
    // https://codeforces.com/contest/1955/problem/A

    w(x) {
        int n, a, b; cin >> n >> a >> b;

        int ans = 0;
        if (2 * a < b) {
            ans = n * a;
        } else {
            if (n & 1) {
                ans = (n - 1) / 2 * b;
                ans += a;
            } else {
                ans = n / 2 * b;
            }
        }

        cout << ans << endl;
    }

    return 0;
}