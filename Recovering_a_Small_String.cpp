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

int main() {

    Mostafa

    // https://codeforces.com/contest/1931/problem/A

    w(x) {
        int n; cin >> n;

        string s = "aaa";

        if (n > 27) {
            int i = 2;

            while (n > 26) {
                s[i] += 25;
                i--;
                n -= 26;
            }

            if (i == 1) {
                s[i] += n - 2;
            } else {
                s[i] += n - 1;
            }

        } else {
            s[2] += n - 3;
        }

        cout << s << endl;
    }

    return 0;
}