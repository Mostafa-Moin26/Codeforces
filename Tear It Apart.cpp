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

    w(t) {
        string s;
        cin >> s;

        int mini = INT_MAX;

        for(int i = 'a'; i <= 'z'; i++) {
            int cnt = 0;
            int maxo = 0;

            for(int j = 0; j < (int)s.size(); j++) {
                if(s[j] != i) {
                    cnt++;
                    maxo = max(maxo, cnt);
                }
                else {
                    cnt = 0;
                }
            }

            mini = min(mini, maxo);
        }

        if(mini == 0) {
            cout << 0 << "\n";
        }
        else {
            cout << (int)log2(mini) + 1 << "\n";
        }
    }

    return 0;
}
