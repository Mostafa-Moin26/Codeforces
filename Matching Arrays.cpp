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

void solve() {
    int n, x;
    cin >> n >> x;

    vector<pair<int,int>> a(n);
    vector<int> b(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i].ff;
        a[i].ss = i;
    }

    sort(a.begin(), a.end());

    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort(b.begin(), b.end());

    vector<int> res(n);

    for(int i = 0; i < n - x; i++) {
        if(b[x + i] < a[i].ff) {
            cout << "NO\n";
            return;
        }
        res[a[i].ss] = b[x + i];
    }

    for(int i = n - x; i < n; i++) {
        if(b[i - n + x] >= a[i].ff) {
            cout << "NO\n";
            return;
        }
        res[a[i].ss] = b[i - n + x];
    }

    cout << "YES\n";
    
    for(int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }

    cout << "\n";
}

signed main() {
    Mostafa

    w(t) {

        solve();
    }

    return 0;
}
