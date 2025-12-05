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
    w(t){

        string s; cin >> s;

        int n = s.size();

        char mn = '9';

        for (int i = n - 1; i >= 0; i--) {
            if (s[i] <= mn) {
                mn = s[i];
            } else {
                s[i] = min(char((int)s[i] + 1), '9');
            }
        }

        sort(s.begin(), s.end());

        cout << s << endl;
    }
    return 0;
}
