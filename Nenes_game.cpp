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
    // https://codeforces.com/contest/1956/problem/A

    w(x) {
        int k, q; cin >> k >> q;

        vi a(k);
        for (int i = 0; i < k; ++i) cin >> a[i];

        while (q--) {
            int num; cin >> num;

            if (num < a[0]) {
                cout << num << " ";
            } else {
                cout << a[0] - 1 << " ";
            }
        }
        cout << endl;
    }

    return 0;
}