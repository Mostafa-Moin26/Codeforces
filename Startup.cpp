#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<pair<int, int>> vip;
#define MOD 1000000007
#define PI 3.141592653589793238462
#define w(x)            int x;cin>>x;while(x--)
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll              long long
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
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
bool comp(int a, int b) {return a > b;}
int main() {
    Mostafa

    // https://codeforces.com/contest/2036/problem/B
    w(x) {

        int n, m; cin >> n >> m;

        int k = min(n, m);

        vi a(m, 0);

        while (m--) {
            int b, c; cin >> b >> c;
            a[b - 1] += c; 
        }
        sort(a.begin(), a.end(), comp);

        int res = 0;

        for (int i = 0; i < k; i++) {
            res += a[i];
        }

        cout << res << endl;
    }
    return 0;
}