#include<bits/stdc++.h>

using namespace std;

#define w(x)            int x;cin>>x;while(x--)
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll              long long
#define pb              push_back
#define ff              first
#define ss              second
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)

int main() {

    Mostafa

    // https://codeforces.com/contest/1917/problem/B

    w(x) {
        int n; cin >> n;
        string s; cin >> s;

        int cnt = 0;

        set<char> st;

        for (auto i : s) {
            st.insert(i);
            cnt += st.size();
        }
        cout << cnt << endl;
    }

    return 0;
}