#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define PI 3.141592653589793238462
#define Mostafa ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define w(x) int x;cin>>x;while(x--)
#define int long long
#define pb push_back
#define ff first
#define ss second
#define ps(x,y) fixed<<setprecision(y)<<x
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)

signed main() {
    Mostafa

    // https://codeforces.com/problemset/problem/1832/C

    w(t) {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];

        int m = unique(a, a + n) - a;
        int res = 1;

        for(int i = 0; i + 1 < m; i++) {
            int j = i + 1;

            while(j + 1 < m && (a[j+1] > a[j]) == (a[j] > a[j-1])) {
                j++;
            }

            i = j - 1;
            res++;
        }

        cout << res << "\n";
    }

    return 0;
}