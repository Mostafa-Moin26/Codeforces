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

    multiset<int> L, R;

    w(t) {

        char op;
        int l, r;
        cin >> op >> l >> r;

        if(op == '+') {
            L.insert(l);
            R.insert(r);
        } else {
            L.erase(L.find(l));
            R.erase(R.find(r));
        }

        if(!L.empty() && !R.empty() && *L.rbegin() > *R.begin()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}