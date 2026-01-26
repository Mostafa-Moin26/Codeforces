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

    int a[200000];

    w(t) {
        int n, k;
        cin >> n >> k;

        for(int i = 0; i < n; i++) cin >> a[i];

        if(k == n) {
            int c = 0;

            for(int i = 1; i < n; i += 2) {
                if(a[i] == i / 2 + 1) c++;
                else break;
            }
            cout << c + 1 << "\n";
            continue;
        }

        int flag = 0;

        for(int i = 1; i + k - 2 < n; i++) {
            if(a[i] != 1) flag = 1;
        }

        if(flag) cout << "1\n";
        else cout << "2\n";
    }

    return 0;
}
