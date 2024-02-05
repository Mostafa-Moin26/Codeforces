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

    // https://codeforces.com/problemset/problem/579/A

    int x; cin >> x;

    int bactecria = 0;

    while (x > 0) {

        int i = 0;
        while ((1 << i) <= x) i++;

        x -= (1 << i - 1);
        bactecria++;
    }

    cout << bactecria << endl;

    return 0;
}