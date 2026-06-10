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

    w(t) {

        int z, w, k;
        cin >> z >> w >> k;

        bool ok = 0;

        for(int i = 1; i <= min(k, 2 * z); i++) {

            w += i;

            if (w % z == 0) {
                ok = 1;
                break;
            }
        }

        if (ok) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}