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

int main() {

    Mostafa
    // https://codeforces.com/contest/1971/problem/C

    w(x) {
      int a, b, c, d; cin >> a >> b >> c >> d;

      bool f1, f2; f1 = f2 = false;

      if (a > b) {
         swap(a, b);
      }

      if (c > a && c < b) {
         f1 = true;
      }

      if (d > a && d < b) {
         f2 = true;
      }

      if ((f1 && f2) || (!f1 && !f2)) {
         cout << "No" << endl;
      } else {
         cout << "Yes" << endl;
      }
    }
    return 0;
}