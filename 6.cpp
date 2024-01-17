#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define mci             map<char,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int>>
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x;  while(x--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

void Mostafa()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int32_t main() {

    Mostafa();

    // https://codeforces.com/problemset/problem/1883/C

    w(x) {
        int n, k; cin >> n >> k;

        int ans = k;
        int even = 0;

        for (int i = 0; i < n; ++i) {

            int num; cin >> num;

            if (num % 2 == 0) even++;
            if (num % k == 0) ans = 0;

            ans = min(ans, k - num % k);
        }

        if (k == 4) {

            if (even >= 2) ans = 0;
            else if (even == 1) ans = min(ans, 1ll);
            else ans = min(ans, 2ll);
        }

        cout << ans << endl;
    }
}