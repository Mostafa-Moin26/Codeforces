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

    w(_) {
        int n;
        cin >> n;

        int ans = 0;
        vector<int> a(n);
        set<int> st;
        map<int,int> mp;

        if(n == 1) {
            int x;
            cin >> x;

            if(x == 0) cout << "NO\n";
            else cout << "YES\n";

            continue;
        }

        for(int i = 0; i < n; i++) {
            cin >> a[i];
            st.insert(a[i]);
            mp[a[i]]++;
        }

        for(auto x : st) {
            if(x == ans) ans++;
            else break;
        }

        int l = 0, r = n - 1;
        int f = 1;

        while(l < n && a[l] != ans + 1) l++;
        while(r >= 0 && a[r] != ans + 1) r--;

        if(l <= r) {
            for(int i = l; i <= r; i++) {
                mp[a[i]]--;
                if(a[i] < ans && mp[a[i]] == 0) {
                    f = 0;
                    break;
                }
            }
        } else {
            int ff = 0;
            for(auto it : mp) {
                int x = it.ff;
                int y = it.ss;
                if(y > 1 || x > ans) {
                    ff = 1;
                    break;
                }
            }
            f = ff;
        }

        cout << (f ? "YES\n" : "NO\n");
    }

    return 0;
}
