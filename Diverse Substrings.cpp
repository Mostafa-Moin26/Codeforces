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
        int n;
        cin >> n;

        string str;
        cin >> str;

        int a = 0;
        int s = 100;

        for(int i = 0; i < n; i++) {
            string s1 = str.substr(i, min(s, n - i));

            int maxi = 1;
            map<char,int> mpp;
            int ans = 0;

            for(auto it : s1) {
                mpp[it]++;
                maxi = max(maxi, mpp[it]);

                if(maxi <= (int)mpp.size()) ans++;
            }

            a += ans;
        }

        cout << a << "\n";
    }

    return 0;
}
