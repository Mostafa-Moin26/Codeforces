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

    // https://codeforces.com/problemset/problem/2176/B

    w(t) {
        int n; 
        string s;

        cin >> n >> s; 

        int left = 0, right = n - 1;

        int cnt = 0;

        while (left < n && s[left] == '0') {
            cnt++;
            left++;
        }

        while (right >= 0 && s[right] == '0') {
            cnt++;
            right--;
        }

        int mx = cnt;
        cnt = 0;

        for (int i = left; i <= right; i++) {
            if (s[i] == '0') {
                cnt++;
            } else {
                cnt = 0;
            }

            mx = max(mx, cnt);
        } 

        cout << mx << "\n"; 

    }
    return 0;
}