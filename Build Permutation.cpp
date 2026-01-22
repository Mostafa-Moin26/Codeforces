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
        int n;
        cin >> n;

        vector<int> arr(n, -1);

        int k = 2 * n - 2;
        k = sqrt(k);
        int i = n - 1;

        while(i >= 0) {

            if(k * k - i < n && arr[k * k - i] == -1) {
                arr[k * k - i] = i;
                i--;
            } else {
                k--;
            }
        }

        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }

        cout << "\n";
    }

    return 0;
}
