#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define PI 3.141592653589793238462
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define w(x)            int x;cin>>x;while(x--)
#define int              long long
#define pb              push_back
#define ff              first
#define ss              second
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)

signed main() {
    Mostafa

    // https://codeforces.com/contest/2086/problem/C

    w(x) {
        int n; cin >> n;

        vector<int> visited(n + 1, 0), a(n), b(n);
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        for (int i = 0; i < n; i++) {

            int curr = b[i];

            while (!visited[curr]) {
                visited[curr] = 1;
                curr = a[curr - 1];
                cnt++;
            }
            cout << cnt << " ";
        }
        cout << endl;


    }
    return 0;
}