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

    https://codeforces.com/problemset/problem/2060/C

    w(x) {
        int n, k; cin >> n >> k;
        int cnt = 0;

        vi a(n); 
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        int first = 0, last = n - 1;

        while (first < last) {
            int sum = a[first] + a[last];

            if (sum == k) {
                cnt++;
                first++, last--;
            } else if (sum > k) {
                last--;
            } else {
                first++;
            }
        }

        cout << cnt << endl;
    }
    return 0;
}