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
    // https://codeforces.com/contest/1946/problem/A

    w(x) {
        int n; cin >> n;
        vi arr(n);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());

        int ans = 1;
        int mid;

        if (n & 1) {
            mid = n / 2;
        } else {
            mid = n / 2 - 1;
        }

        for (int i = mid; i < n - 1; ++i) {
            if (arr[i] == arr[i + 1]) {
                ans++;
            } else {
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}