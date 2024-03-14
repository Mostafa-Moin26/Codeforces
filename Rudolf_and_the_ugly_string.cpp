#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<pair<int, int>> vip;

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
    // https://codeforces.com/contest/1941/problem/C

    w(x) {
        int n; cin >> n;

        string s; cin >> s;

        int ans = 0;
        for (int i = 0; i < n - 2; ++i) {
            if ((s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p') ||
                    (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e')) {
                ans++;
                s[i + 2] = 'x';
            }
        }

        cout << ans << endl;
    }


    return 0;
}