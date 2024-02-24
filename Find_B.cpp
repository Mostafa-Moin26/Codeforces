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

    // https://codeforces.com/contest/1923/problem/C

    w(x) {
        int n, q; cin >> n >> q;

        vector<ll> pre(n + 1, 0), one(n + 1, 0);
        ll p = 0, o = 0;

        REP(i, 1, n) {
            int x; cin >> x;

            p += x;
            o += (x == 1);

            pre[i] = p;
            one[i] = o;
        }

        bool flag = true;
        int l, r;

        while (q--) {
            cin >> l >> r;

            if (l == r) {
                flag = false;
            } else {

                ll sum = pre[r] - pre[l - 1];
                ll cnt = one[r] - one[l - 1];
                ll rem = r - l + 1 - cnt;

                sum -= 2 * cnt;

                flag = (sum >= rem);

            }

            cout << (flag ? "Yes" : "No") << endl;


        }
    }

    return 0;
}