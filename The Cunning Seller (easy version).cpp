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
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)

signed main() {
    Mostafa

    https://codeforces.com/contest/2132/problem/C1

    w(t){
        int n; cin >> n;
        int ans = 0;

        int curr = 1;
        int i = 0;

        while (n > 0) {
            int d = n % 3;   
            int x = curr * 3;

            if (i != 0) {
                x += (i * (curr / 3));
            }     
           
            ans += d * x;

            n /= 3;
            curr *= 3; 
            i++;           

        }


        cout << ans << "\n";
    }
    return 0;
}