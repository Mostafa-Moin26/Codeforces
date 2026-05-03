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

signed main() {
    Mostafa

    w(t) {

        int n;
        cin >> n;

        vector<set<int>> s(n);
        set<int> all;

        for(int i = 0; i < n; i++) {

            int k;
            cin >> k;

            while(k--) {
                int x;
                cin >> x;
                s[i].insert(x);
                all.insert(x);
            }
        }

        int ans = 0;

        for(auto x : all) {

            set<int> cur;

            for(int i = 0; i < n; i++) {
                if(!s[i].count(x)) {
                    for(auto y : s[i]) cur.insert(y);
                }
            }

            ans = max(ans, (int)cur.size());
        }

        cout << ans << '\n';
    }

    return 0;
}