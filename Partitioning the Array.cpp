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

    w(t) {

        int n;
        cin >> n;

        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int c = 0;

        for(int i = 1; i < n; i++) {

            if (n % i) continue;

            int g = abs(v[i] - v[0]);

            for(int j = 1; j < n - i; j++) {
                g = __gcd(g, abs(v[j + i] - v[j]));
            }

            if(g > 1 || g == 0) c++;
        }

        cout << c + 1 << '\n';
    }

    return 0;
}