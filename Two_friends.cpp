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

int main() {

    Mostafa
    // https://codeforces.com/contest/1969/problem/A

    w(x) {

        int n; cin >> n;

        int arr[n + 1];

        for (int i = 1; i <= n;  ++i) cin >> arr[i];

        bool f = false;

        for (int i = 1; i <= n; ++i) {

            if (arr[arr[i]] == i) {
                f = true;
                break;
            }
        }

        if (f) {
            cout << 2 << endl;
        } else {
            cout << 3 << endl;
        }
    }
    return 0;
}