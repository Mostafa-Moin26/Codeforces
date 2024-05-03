#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<pair<int, int>> vip;

#define w(x)            int x;cin>>x;while(x--)
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll              long long
#define pb              push_back
#define ff              first
#define ss              second
#define mp              make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)

int main() {

    Mostafa
    // https://codeforces.com/problemset/problem/1690/D

    w(x) {
        int n, k; cin >> n >> k;
        string s; cin >> s;
        vi a(n, 0); 

        a[0] += s[0] == 'W';

        for (int i = 1; i < n; ++i) a[i] += a[i - 1] + (s[i] == 'W');

        int ans = 2e5 + 10;

        int i = 0, j = k - 1;

        while (j < n) {
         ans = min(ans, a[j] - a[i] + (s[i] == 'W'));
         i++, j++;
        }

        cout << ans << endl;

    }
    return 0;
}