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

void solve(){
    int n; cin >> n;
    set<pair<int,int>> st;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        st.insert({x, i});
    }

    vector<pair<int,int>> ans;

    while(true){
        auto it1 = *st.begin();
        auto it2 = *st.rbegin();
        int a = it1.ff, id = it1.ss;
        int b = it2.ff, id2 = it2.ss;
        if(a == b) break;
        if(a == 1){
            cout << -1 << "\n";
            return;
        }
        ans.pb({id2,id});
        st.erase(it2);
        st.insert({(b - 1) / a + 1, id2});
    }

    cout << ans.size()<< "\n";

    for(auto &p:ans) cout << p.ff + 1 <<" "<< p.ss + 1 << "\n";
}

signed main(){
    Mostafa
    
    w(t){
        solve();
    }
    return 0;
}
