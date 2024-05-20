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
    // https://codeforces.com/contest/1973/problem/A

    w(x) {
      int a[3]; cin >> a[0] >> a[1] >> a[2];

      sort(a, a + 3);

      if ((a[0] + a[1] + a[2]) & 1) {
         cout << -1 << endl;
      } else if (a[2] > a[0] + a[1]) {
         cout << a[0] + a[1] << endl;
      } else {
         cout << (a[0] + a[1] + a[2]) / 2 << endl;
      }
    }
    return 0;
}