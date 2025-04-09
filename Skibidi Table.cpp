#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define PI 3.141592653589793238462
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define w(x)            int x;cin>>x;while(x--)
#define int              long long
#define pb              push_back
#define ff              first
#define ss              second
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
vector<int> func1(int sz, int first, int row, int col, int d) {
    if (sz == 0) {
        return {row, col};
    }
    int newSz = sz / 2;
    int add = newSz * newSz;
    int sum = first + add - 1;

    if (d >= first && d <= sum) {
        return func1(newSz, first, row, col, d);
    }
    else if (d >= sum + 1 && d <= sum + add) {
        return func1(newSz, sum + 1, row + newSz, col + newSz, d);
    }
    else if (d >= sum + add + 1 && d <= sum + (add * 2)) {
        return func1(newSz, sum + add + 1, row + newSz, col, d);
    }
    else {
        return func1(newSz, sum + (add * 2) + 1, row, col + newSz, d);
    }
}

int func2(int sz, int x, int y, int nx, int ny, int first) {
    if (sz == 0) {
        return first;
    }

    int newSz = sz / 2;
    int add = newSz * newSz;
    int sum = first + add - 1;

    if ((x >= nx && x <= nx + newSz - 1) && (y >= ny && y <= ny + newSz - 1)) {
        return func2(newSz, x, y, nx, ny, first);
    }
    else if ((x >= nx + newSz && x <= nx + (2 * newSz - 1)) && (y >= ny + newSz && y <= ny + (2 * newSz - 1))) {
        return func2(newSz, x, y, nx + newSz, ny + newSz, sum + 1);
    }
    else if ((x >= nx + newSz && x <= nx + (2 * newSz - 1)) && (y >= ny && y <= ny + newSz - 1)) {
        return func2(newSz, x, y, nx + newSz, ny, sum + add + 1);
    }
    else {
        return func2(newSz, x, y, nx, ny + newSz, sum + (add * 2) + 1);
    }
}
signed main() {
    Mostafa
    // https://codeforces.com/contest/2093/problem/D

    w(x) {
        int n, q; cin >> n >> q;
        n = pow(2, n);

        while (q--) {
            string s; cin >> s;

            if (s == "->") {
                int x, y; cin >> x >> y;

                cout << func2(n, x, y, 1, 1, 1) << endl;
            } else {
                int d; cin >> d;
                vector<int> res = func1(n, 1, 1, 1, d);

                cout << res[0] << " " << res[1] << endl;
            }
        }


    }
    return 0;
}