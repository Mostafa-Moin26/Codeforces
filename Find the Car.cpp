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

const int N = 1e5 + 5;

int a[N], b[N];

signed main() {
    Mostafa

    w(t) {

        int n, k, q;
        cin >> n >> k >> q;

        for(int i = 1; i <= k; i++) {
            cin >> a[i];
        }
        for(int i = 1; i <= k; i++) {
            cin >> b[i];
        }

        while(q--) {

            int d;
            cin >> d;

            int l = 0, r = k;

            while(l < r - 1) {

                int mid = (l + r) / 2;

                if (a[mid] >= d) {
                    r = mid;
                } else {
                    l = mid;
                }
            }

            cout << b[l] + (d - a[l]) * (b[l + 1] - b[l]) / (a[l + 1] - a[l]) << " ";
        }

        cout << '\n';
    }

    return 0;
}