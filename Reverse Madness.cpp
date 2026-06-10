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

signed main() {
    Mostafa

    // https://codeforces.com/problemset/problem/1878/D

    w(t) {

        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        vector<int> l(k), r(k);

        for(auto &x : l) {
            cin >> x;
            x--;
        }

        for(auto &x : r) {
            cin >> x;
            x--;
        }

        int q;
        cin >> q;

        vector<int> cnt(n + 1);

        while(q--) {

            int x;
            cin >> x;

            cnt[x - 1]++;
        }

        string ans = "";

        for(int i = 0; i < k; i++) {

            string cur = s.substr(l[i], r[i] - l[i] + 1);

            int sum = 0;

            for(int j = l[i]; j <= (l[i] + r[i]) / 2; j++) {

                sum += cnt[j] + cnt[r[i] - j + l[i]];

                if(sum & 1) {
                    swap(cur[j - l[i]], cur[r[i] - j]);
                }
            }

            ans += cur;
        }

        cout << ans << '\n';
    }

    return 0;
}