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

signed main(){
    Mostafa

    w(t) {
        int n; cin >> n;
        string s; cin >> s;

        int cnt = 0;
        
        for(char ch : s) {
         if (ch == '0') cnt++;
        }

        vector<int> pos;

        for(int i = 0; i < n; i++){
            if(i < cnt) {
                if(s[i] != '0') pos.pb(i + 1);

            } else{
                if(s[i] != '1') pos.pb(i + 1);
            }
        }

        if(pos.empty()) {
            cout << "Bob\n";

        } else {
            cout << "Alice\n";
            cout << pos.size() << "\n";

            for(int it : pos) cout << it << " ";
            cout << "\n";
        }
    }

    return 0;
}
