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

    // https://codeforces.com/problemset/problem/2008/D

    w(x) {
        int n; cin >> n;
        vi p(n + 1), res(n + 1, 0), ans(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            cin >> p[i];
        }
        string s; cin >> s;
        
        for (int i = 1; i <= n; i++) {

            if (res[i]) {
                continue;
            }

            int cnt = 0;

            while (res[i] != 1) {
                res[i] = 1;
                cnt += s[i - 1] == '0';
                i = p[i];
            }

            while (res[i] != 2) {
                res[i] = 2;
                ans[i] = cnt;
                i = p[i];
            }
        }

        for (int i = 1; i <= n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}