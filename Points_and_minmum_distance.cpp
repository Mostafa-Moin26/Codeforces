#include<bits/stdc++.h>

using namespace std;

#define w(x)            int x;cin>>x;while(x--)
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int a[1000];

int main() {

    Mostafa
    // https://codeforces.com/problemset/problem/1895/B

    w(x) {
        int n; cin >> n;

        for (int i = 1; i <= n + n; ++i) cin >> a[i];

        sort(a + 1, a + n + n + 1);

        cout << a[n] - a[1] + a[n + n] - a[n + 1] << endl;

        for (int i = 1; i <= n; ++i) cout << a[i] << ' ' << a[i + n] << endl;
    }
    return 0;
}