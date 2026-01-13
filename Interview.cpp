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

int help(int l, int mid) {

    cout << "?" << " " << mid - l + 1 << " ";

    for(int i = l; i <= mid; i++) cout << i << " ";

    cout << endl;

    int p;
    cin >> p;

    return p;
}

signed main() {
    Mostafa

    w(t) {
        int n;
        cin >> n;

        vector<int> v(n + 1, 0);

        for(int i = 1; i <= n; i++) {
            cin >> v[i];

            v[i] += v[i - 1];
        }

        int l = 1, r = n;

        while(r - l > 1) {
            int mid = (l + r) / 2;

            if(help(l, mid) > v[mid] - v[l - 1]) r = mid;
            else l = mid + 1;
        }

        if(help(l, l) > v[l] - v[l - 1]) cout << "! " << l << endl;
        else cout << "! " << r << endl;
    }
    return 0;
}
