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

    // https://codeforces.com/contest/1955/problem/B

    w(x) {
        int n, c, d; cin >> n >> c >> d;

        vi a, b;

        for (int i = 0; i < n * n; ++i) {
            int num; cin >> num;

            a.pb(num);
        }
        int f = *min_element(a.begin(), a.end());

        for (int i = 0; i < n; ++i) {

            for (int j = 0; j < n; ++j) {
                b.pb(f + c * i + d * j);
            }

        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if (a == b) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}