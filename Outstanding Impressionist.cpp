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

int n, l[200100], r[200010];
int cnt[400010], qzh[400010];

signed main() {
    Mostafa

    // https://codeforces.com/contest/2053/problem/B

    w(x) {
        cin >> n;

        for(int i = 1; i <= 2 * n; i++) cnt[i] = 0;

        for(int i = 1; i <= n; i++)
        {
            cin >> l[i] >> r[i];

            if(l[i] == r[i]) cnt[l[i]]++;
        }

        for(int i = 1; i <= 2 * n; i++)
        {
            qzh[i] = qzh[i - 1] + (cnt[i] >= 1);
        }

        for(int i = 1; i <= n; i++)
        {
            int now = qzh[r[i]] - qzh[l[i] - 1];

            if(l[i] == r[i]) now = now - (cnt[l[i]] >= 1) + (cnt[l[i]] >= 2);

            cout << (now == r[i] - l[i] + 1 ? 0 : 1);
        }
        cout << endl;
    }
    return 0;
}