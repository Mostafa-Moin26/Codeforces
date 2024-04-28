#include <bits/stdc++.h>
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
#define REP(i,a,b)      for (int i = a; i <= b; i++)
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)

int main() {
    Mostafa

    // https://codeforces.com/contest/1966/problem/B
    
    w(x) {
        int n, m; 
        cin >> n >> m;

        vector<vector<char>> mat(n, vector<char>(m));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> mat[i][j];
            }
        }

        bool f = false;

        if (mat[0][0] == mat[n-1][m-1] || mat[n-1][0] == mat[0][m-1]) {
            f = true;
        }
        if (mat[0][0] == mat[n-1][0]) {
            for (int i = 0; i < n; ++i) {
                if (mat[i][m-1] == mat[0][0]) {
                    f = true;
                    break;
                }
            }
        }
        if (mat[0][0] == mat[0][m-1]) {
            for (int i = 0; i < m; ++i) {
                if (mat[n-1][i] == mat[0][0]) {
                    f = true;
                    break;
                }
            }
        } 
        if (mat[0][m-1] == mat[n-1][m-1]) {
            for (int i = 0; i < n; ++i) {
                if (mat[i][0] == mat[0][m-1]) {
                    f = true;
                    break;
                }
            }
        } 
        if(mat[n-1][0] == mat[n-1][m-1]) {
            for (int i = 0; i < m; ++i) {
                if (mat[0][i] == mat[n-1][0]) {
                    f = true;
                    break;
                }
            }
        }

        if (f) {
            cout << "Yes" << endl;
        }else {
            cout << "No" << endl;
        }
    }
    return 0;
}
