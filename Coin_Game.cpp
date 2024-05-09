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
    // https://codeforces.com/problemset/problem/1972/B

    w(x) {
      int n; cin >> n;
      string s; cin >> s;

      int cnt = 0;

      for (int i = 0; i < n; ++i) cnt += (s[i] == 'U'); 

      if (cnt & 1) cout << "Yes" << endl;
      else cout << "No" << endl;
    }

    return 0;
}