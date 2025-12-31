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

void solve() {

    int N; cin >> N;
    string S; cin >> S;

    int now = 0;
    int color = 1;

    vector<int> ans(N, 0);

    int key = (S[0] == '(' ? 1 : -1);

    for (int i = 0; i < N; i++) {
        now += (S[i] == '(' ? 1 : -1);
        if (now == 0) {
            ans[i] = (i ? ans[i - 1] : 0);
        } else if (now * key > 0) {
            ans[i] = 1;
        } else {
            ans[i] = 2;
        }
                
        color = max(color, ans[i]);
    }

    if (now != 0) {
        cout << -1 << '\n';
        return;
    }

    cout << color << '\n';

    for (int i = 0; i < N; i++) {
        if (i) cout << ' ';
        cout << ans[i];
    }
    cout << '\n';
}

signed main() {
    Mostafa

    w(t) {

        solve();
    }
    return 0;
}
