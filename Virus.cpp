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

signed main() {
    Mostafa

    w(t) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(k);

        for (int i = 0; i < k; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        vector<int> dv(k);

        for(int i = 1; i < k; i++) {
            dv[i-1] = arr[i] - arr[i-1] - 1;
        }

        dv[k-1] = arr[0] + n - arr[k - 1] - 1;

        sort(dv.rbegin(), dv.rend());

        int c = 0, x = 0;

        for(int i = 0; i < k; i++) {
            int y = dv[i] - (x * 4);

            if(y <= 0) break;

            c += y - 1;

            if(y == 1) c++;

            x++;
        }

        cout << n - c << "\n";
    }

    return 0;
}
