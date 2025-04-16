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

// another solution
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

signed main() {
    Mostafa

    w(x) {
        int n, m; cin >> n >> m;
        char mat[n][m];
        bool hasW_first_row = false, hasB_first_row = false;
        bool hasW_last_row = false, hasB_last_row = false;
        bool hasW_first_col = false, hasB_first_col = false;
        bool hasW_last_col = false, hasB_last_col = false;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> mat[i][j];
            }
        }
        
        // Check first and last rows
        for (int j = 0; j < m; j++) {
            if (mat[0][j] == 'W') hasW_first_row = true;
            if (mat[0][j] == 'B') hasB_first_row = true;
            if (mat[n - 1][j] == 'W') hasW_last_row = true;
            if (mat[n - 1][j] == 'B') hasB_last_row = true;
        }

        // Check first and last columns
        for (int i = 0; i < n; i++) {
            if (mat[i][0] == 'W') hasW_first_col = true;
            if (mat[i][0] == 'B') hasB_first_col = true;
            if (mat[i][m - 1] == 'W') hasW_last_col = true;
            if (mat[i][m - 1] == 'B') hasB_last_col = true;
        }

        // Check if all boundaries have at least one 'W' or all have at least one 'B'
        bool all_W = (hasW_first_row && hasW_last_row && hasW_first_col && hasW_last_col);
        bool all_B = (hasB_first_row && hasB_last_row && hasB_first_col && hasB_last_col);

        if (all_W || all_B) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}