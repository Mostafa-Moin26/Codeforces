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

int a[1000001];

signed main() {
    Mostafa

    w(t) {
        int n;
        cin >> n;

        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        if(n & 1) {
            cout << "YES\n";
            continue;
        }

        int f = 1;

        for(int i = n; i >= 1; i -= 2) {
            if(a[i] >= a[i - 1]) {
                a[i - 2] += a[i] - a[i - 1];
            }
            else {
                if(i - 2 < 1) {
                    f = 0;
                    break;
                }
                else {
                    a[i - 2] -= a[i - 1] - a[i];
                }
            }
        }

        if (f) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
