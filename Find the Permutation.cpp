#include<bits/stdc++.h>
using namespace std;

#define int long long
#define yy cout<<"YES"<<endl
#define nn cout<<"NO"<<endl

void solve() {
    int n;
    cin >> n;
    vector<string> adj(n);
    for (int i = 0; i < n; ++i) {
        cin >> adj[i];
    }

    
    vector<int> perm(n);
    iota(perm.begin(), perm.end(), 0);

    auto compare = [&](int i, int j) {
        if (i < j) return adj[i][j] == '1';

        return adj[i][j] == '0';
    };


    sort(perm.begin(), perm.end(), compare);
    // reverse(perm.begin(), perm.end());

    for (int i = 0; i < n; ++i) {
        cout << perm[i] + 1 << " ";
    }
    cout << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // https://codeforces.com/contest/2056/problem/B

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}