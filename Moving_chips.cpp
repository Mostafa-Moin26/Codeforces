#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;

#define w(x)            int x;cin>>x;while(x--)
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll              long long
#define pb              push_back
#define ff              first
#define ss              second
#define mp              make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)

int main() {

    Mostafa
    // https://codeforces.com/contest/1923/problem/A

    w(x) {

        int n; cin >> n;

        int ans = 0;
        int a[n];

        for (int i = 0; i < n;  ++i) {
            cin >> a[i];
            ans += (a[i] == 0);
        }

        int l = 0, r = n - 1;

        while (a[l] == 0) ans--, l++;
        while (a[r] == 0) ans--, r--;

        cout << ans << endl;
    }

    return 0;
}