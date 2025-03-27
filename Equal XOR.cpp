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
bool comp(const pair<int,int> &a, const pair<int,int> &b) {
    return (a.ss == b.ss) ? a.ff < b.ff : a.ss > b.ss;
}

signed main() {
    Mostafa

    // https://codeforces.com/problemset/problem/1944/B

    w(x) {
        int n, k; cin >> n >> k;

        map<int, int> a, b;

        for (int i = 0; i < n; i++) {
            int num; cin >> num;
            a[num]++;
        }
        for (int i = 0; i < n; i++) {
            int num; cin >> num;
            b[num]++;
        }

        vector<pair<int, int>> v1(a.begin(), a.end());
        vector<pair<int, int>> v2(b.begin(), b.end());

        sort(v1.begin(), v1.end(), comp);
        sort(v2.begin(), v2.end(), comp);

        vector<int> l, r;

        for (auto &it : v1) {
            if (it.ss == 2) {
                l.pb(it.ff);
                l.pb(it.ff);
            } else {
                l.pb(it.ff);
            }
            if (l.size() == 2 * k) {
                break;
            }
        }
        for (auto &it : v2) {
            if (it.ss == 2) {
                r.pb(it.ff);
                r.pb(it.ff);
            } else {
                r.pb(it.ff);
            }
            if (r.size() == 2 * k) {
                break;
            }
        }

        for (auto it : l) {
            cout << it << " ";
        }
        cout << endl;
        for (auto it : r) {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}