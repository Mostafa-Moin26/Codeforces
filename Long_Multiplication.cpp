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
    // https://codeforces.com/contest/1954/problem/C

    w(x) {
        string x, y; cin >> x >> y;

        bool fx = false, fy = false;

        int i = 0;

        while ( i < x.size() && x[i] == y[i]) i++;

        if (x[i] > y[i]) {
            fy = true;
            swap(x[i], y[i]);
            i++;
        } else {
            fx = true;
            swap(x[i], y[i]);
            i++;
        }

        while (i < x.size()) {
            if (fx && x[i] > y[i]) {
                swap(x[i], y[i]);

            } else if (fy && y[i] > x[i]) {
                swap(y[i], x[i]);
            }
            i++;
        }
        cout << x << "\n" << y << endl;
    }

    return 0;
}