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

    // https://codeforces.com/problemset/problem/1881/B

    w(x) {

        int a[3]; cin >> a[0] >> a[1] >> a[2];

        int minElement = *min_element(a, a + 3);

        bool flag = true;
        int ans = 0;

        for (int i = 0; i < 3; ++i) {

            if (a[i] % minElement != 0) {
                flag = false; break;
            } else {
                ans += (a[i] / minElement) - 1;
            }
        }

        if (flag && ans <= 3) cout << "Yes" << endl;
        else cout << "No" << endl;

    }

}