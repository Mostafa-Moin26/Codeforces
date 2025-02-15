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

    // https://codeforces.com/problemset/problem/2004/B

    w(x) {
        int l, L, r, R;  cin >> l >> r >> L >> R;

        int ans; 

        if (r < L || R < l) {
            ans = 1;
        } else if (l == L && r == R) {
            ans = r - l;
        } else if (r == R) {
            ans = R - max(l, L) + 1;
        } else if (l == L) {
            ans = min(r, R) - l + 1;
        } else if (r < R && l > L) {
            ans = r - l + 2;
        } else if (R < r && L > l) {
            ans = R - L + 2;
        } else if (r < R) {
            ans = abs(L - r) + 2;
        } else {
            ans = abs(l - R) + 2;
        }

        cout << ans << endl;
    }
    return 0;
}

// More optimal code
   w(x) {
        int l, L, r, R;  cin >> l >> r >> L >> R;

        int ans;

        if (r < L || R < l) {
            ans = 1;
        } else {
            int upperBound = min(r, R);
            int lowerBound = max(L, l);
            ans = upperBound - lowerBound;

            if (l != L) ans++;
            if (r != R) ans++;

        }

        cout << ans << endl;
    }
