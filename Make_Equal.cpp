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

    // https://codeforces.com/contest/1931/problem/B

    w(x) {
        int n; cin >> n;

        int arr[n], sum = 0;

        REP(i, 0, n - 1) {
            cin >> arr[i];
            sum += arr[i];
        }

        int value = sum / n, extra = 0;

        bool flag = true;

        REP(i, 0, n - 1) {

            if (arr[i] > value) {
                extra += (arr[i] - value);
            } else if (arr[i] + extra < value) {
                flag = false;
                break;
            } else {

                extra -= (value - arr[i]);
            }
        }

        if (flag) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }


    return 0;
}