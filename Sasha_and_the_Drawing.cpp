#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;

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


void Colour () {

    ll n, k; cin >> n >> k;

    ll sum = 4 * n - 2;
    ll colour = 0;

    if (sum > k) {
        if (k & 1) {
            colour++;
            k--;
        }
        colour += k / 2;

    } else {

        colour = 2 * n;

    }

    cout << colour << endl;

}

int main() {

    Mostafa

    // https://codeforces.com/contest/1929/problem/B

    w(x) {

        Colour();

    }

    return 0;
}