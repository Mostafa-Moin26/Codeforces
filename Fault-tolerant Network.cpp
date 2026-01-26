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

        vector<int> a(n + 1), b(n + 1);

        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        for(int i = 1; i <= n; i++) {
            cin >> b[i];
        }

        int ans = INT_MAX;
        int ans1 = INT_MAX, ans2 = INT_MAX;
        int ans3 = INT_MAX, ans4 = INT_MAX;

        ans = min(
            abs(a[1] - b[n]) + abs(a[n] - b[1]),
            abs(a[1] - b[1]) + abs(a[n] - b[n])
        );

        for(int i = 1; i <= n; i++) {
            ans1 = min(ans1, llabs(a[1] - b[i]));
            ans2 = min(ans2, llabs(a[n] - b[i]));
            ans3 = min(ans3, llabs(b[1] - a[i]));
            ans4 = min(ans4, llabs(b[n] - a[i]));
        }

        ans = min(ans, llabs(a[1] - b[1]) + ans2 + ans4);
        ans = min(ans, llabs(a[n] - b[n]) + ans1 + ans3);
        ans = min(ans, llabs(a[1] - b[n]) + ans2 + ans3);
        ans = min(ans, llabs(a[n] - b[1]) + ans1 + ans4);
        ans = min(ans, ans1 + ans2 + ans3 + ans4);

        cout << ans << "\n";
    }

    return 0;
}
