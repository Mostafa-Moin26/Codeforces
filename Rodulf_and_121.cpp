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

    // https://codeforces.com/contest/1941/problem/B

    w(x) {
        int n; cin >> n;

        int a[n];

        for (int i = 0; i < n; ++i) cin >> a[i];

        bool flag = true;

        for (int i = 1; i < n - 1; ++i) {

            if (a[i] < 2 * a[i - 1] || a[i - 1] > a[i + 1] ) {
                flag = false;
                break;
            } else {

                if (a[i - 1] == 0) {
                    continue;
                }
                a[i] -= (2 * a[i - 1]);
                a[i + 1] -= a[i - 1];
            }
        }

        if (flag && a[n - 1] == 0 && a[n - 2] == 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }



    return 0;
}