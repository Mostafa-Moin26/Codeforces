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
    // https://codeforces.com/contest/1954/problem/B

    w(x) {
        int n; cin >> n;

        vi a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        vi b = a;

        sort(b.begin(), b.end());

        if (b[0] == b[n - 1]) {
            cout << -1 << endl;
        } else {
            int ans = 1e9;
            int first = a[0];
            for (int i = 0; i < n; ) {

                if (a[i] != first) i++;
                else {
                    int c = 0;

                    while (i < n && a[i] == first) {
                        c++;
                        i++;
                    }
                    ans = min(ans, c);
                }
            }
            cout << ans << endl;
        }
    }



    return 0;
}