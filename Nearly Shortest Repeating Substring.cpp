#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define PI 3.141592653589793238462
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define w(x)            int x;cin>>x;while(x--)
#define int             long long
#define pb              push_back
#define ff              first
#define ss              second

signed main() {
    Mostafa

    w(t) {

        int n;
        cin >> n;

        string s;
        cin >> s;

        s += s;

        for(int i = 1; i <= n; i++) {

            if(n % i) {
                continue;
            }

            int c1 = 0, c2 = 0;

            for(int j = 0; j < n; j++) {

                if(s[j] != s[j % i]) {
                    c1++;
                }

                if(i != n && s[j] != s[j % i + i]) {
                    c2++;
                }
            }

            if(c1 < 2 || c2 < 2) {
                cout << i << '\n';
                break;
            }
        }
    }

    return 0;
}