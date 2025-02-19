#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<pair<int, int>> vip;
#define MOD 1000000007
#define PI 3.141592653589793238462
#define w(x)            int x;cin>>x;while(x--)
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define int              long long
#define pb              push_back
#define ff              first
#define ss              second
#define mp              make_pair
#define all(x) (x).begin(), (x).end()
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
int gcd(int a, int b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
bool comp(int a, int b) {return a > b;}
signed main() {
    Mostafa

    // https://codeforces.com/contest/1987/problem/B

    w(x) {
        int n; cin >> n;

        vi a(n), b;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int val = a[0];

        for (int i = 1; i < n; i++) {
            if (a[i] < val) {
                b.pb(val - a[i]);
            } else {
                val = a[i];
            }
        }

        sort(b.begin(), b.end());

        int res = 0;
        int sz = b.size() + 1;

        if (sz > 1) {
            res += (b[0] * (sz));
            sz--;

            for (int i = 1; i < b.size(); i++) {
                res += ((b[i] - b[i - 1]) * sz);
                sz--;
            }
        }
        cout << res << endl;
    }
    return 0;
}