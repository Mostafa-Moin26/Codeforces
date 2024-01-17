#include<bits/stdc++.h>

using namespace std;

#define w(x)            int x;cin>>x;while(x--)
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll              long long
#define pb              push_back
#define ff              first
#define ss              second
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)

int main() {

    Mostafa

    // https://codeforces.com/problemset/problem/1903/A

    w(x) {
        int n, k; cin >> n >> k;

        int arr[n];
        bool flag = true;

        for (int i = 0; i < n; ++i) cin >> arr[i];

        for (int i = 1; i < n; ++i) {
            if (arr[i] < arr[i - 1]) {
                flag = false;
                break;
            }
        }

        if (k >= 2 || flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }


    return 0;
}