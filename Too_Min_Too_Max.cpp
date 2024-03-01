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
    // https://codeforces.com/contest/1934/problem/A

    w(x) {
        int n; cin >> n;
        vi arr(n);

        REP(i, 0, n - 1) cin >> arr[i];

        sort(arr.begin(), arr.end());

        cout << abs(arr[0] - arr[n - 1]) + abs(arr[n - 1] - arr[1]) + abs(arr[1] - arr[n - 2]) + abs(arr[n - 2] - arr[0]) << endl;
    }

    return 0;
}