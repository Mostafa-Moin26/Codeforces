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

    // https://codeforces.com/contest/1926/problem/B

    w(x) {
        int n; cin >> n;
        string s;
        bool flag = false;

        for (int i = 0; i < n; ++i) {

            cin >> s;

            for (int j = 1; j < n - 1; ++j) {
                if (s[j] == '1' && s[j - 1] == '0' && s[j + 1] == '0')
                {   flag = true;
                    break;
                }
            }
        }

        if (flag) cout << "TRIANGLE" << endl;
        else cout << "SQUARE" << endl;
    }

    return 0;
}