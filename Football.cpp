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
    // https://codeforces.com/contest/96/problem/A

    string s; cin >> s;

    int one, zero; one = zero = 0;

    bool f = false;

    for (int i = 0; i < s.size(); ++i) {

        if (s[i] == '0') {
            zero++;
            one = 0;
        } else {
            one++;
            zero = 0;
        }
        if (one == 7 || zero == 7) {
            f = true;
        }
    }
    if (f) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}