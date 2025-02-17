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

    // https://codeforces.com/problemset/problem/2000/C

    w(x) {
        int n; cin >> n;
        vi a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int m; cin >> m;
        string s;
        bool f;

        while (m--) {
            cin >> s;

            if (s.size() != n) {
                no;
                continue;
            }
            map<char, int> pos_map;
            map<int, char> char_map;
            f = true;

            for (int i = 0; i < n; i++) {

                if (pos_map.count(s[i]) == 0 && char_map.count(a[i]) == 0) {
                    pos_map[s[i]] = a[i];
                    char_map[a[i]] = s[i];
                } else {
                    if (pos_map[s[i]] != a[i] || char_map[a[i]] != s[i]) {
                        f = false;
                        break;
                    }
                }
            }
            if (f) yes;
            else no;
        }
    }
    return 0;
}