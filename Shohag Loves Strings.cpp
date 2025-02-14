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

void solve() {
    string s; cin >> s;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            cout << s[i] << s[i] << endl;
            return;
        }
    }

    for (int i = 2; i < s.size(); i++) {
        if (s[i] != s[i - 2]) {
            cout << s[i - 2] << s[i - 1] << s[i] << endl;
            return;
        }
    }

    cout << -1 << endl;
}
signed main() {
    Mostafa

    // https://codeforces.com/problemset/problem/2039/B

    w(x) {

        solve();
    }
    return 0;
}