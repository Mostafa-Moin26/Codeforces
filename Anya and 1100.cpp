#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<pair<int, int>> vip;
#define MOD 1000000007
#define PI 3.141592653589793238462
#define w(x)            int x;cin>>x;while(x--)
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// #define int              long long
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
int main() {
    Mostafa

    // https://codeforces.com/problemset/problem/2036/C

    w(x) {
        string s; cin >> s;

        int n = s.size();

        set<int> cnt;

        for (int i = 0; i <= n - 4; i++) {
            if (s.substr(i, 4) == "1100") {
                cnt.insert(i);
            }
        }

        int q; cin >> q;

        while (q--) {
            int idx, v;
            cin >> idx >> v;

            idx--;

            for (int i = max(0, idx - 3); i <= min(n - 4, idx); i++) {
                if (s.substr(i, 4) == "1100") {
                    cnt.erase(i);
                }
            }

            s[idx] = v + '0';

            for (int i = max(0, idx - 3); i <= min(n - 4, idx); i++) {
                if (s.substr(i, 4) == "1100") {
                    cnt.insert(i);
                }
            }

            if (cnt.empty()) {
                no;
            } else {
                yes;
            }

        }
    }
    return 0;
}