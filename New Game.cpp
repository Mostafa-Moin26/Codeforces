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

int a[200009];

signed main() {
    Mostafa


    w(x) {
        int n, m, i, j, k;
        cin >> n >> m;

        for(i = 1; i <= n; i++) cin >> a[i];

        sort(a + 1, a + n + 1);

         int l, r = 0, ans = 0;

        for(l = 1; l <= n; l++)
        {   
            r = max(l, r);

            while(r + 1 <= n && a[r+1] - a[r] <= 1 && a[r+1] - a[l] < m) r++;

            ans = max(ans, r - l + 1);
        }
        cout << ans << endl;
    }
    return 0;
}