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
        char mat[n][n];

        int sum = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n;  ++j) {
                cin >> mat[i][j];

                if (mat[i][j] == '1') sum++;
            }
        }
        int val = 0;
        for (int i = 0; i < n; ++i) {
            val = 0;
            for (int j = 0; j < n; ++j) {
                if (mat[i][j] == '1') val++;
            }
            if (val != 0) {
                break;
            }
        }

        if (sum / val == val) cout << "SQUARE" << endl;
        else cout << "TRIANGLE" << endl;


    }

    return 0;
}