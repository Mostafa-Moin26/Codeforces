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

#define MXN 2e5 + 5
vector<int> pre(MXN, 0);

int digitSum(int n, int sum) {
    if (n == 0) return sum;

    return digitSum(n / 10, sum + n % 10);
}

void preCompute() {

    pre[1] = 1;

    for (int i = 2; i < MXN; ++i) {

        pre[i] = pre[i - 1] + digitSum(i, 0);
    }
}

int main() {

    Mostafa

    // https://codeforces.com/contest/1926/problem/C

    preCompute();

    w(x) {
        int n; cin >> n;

        cout << pre[n] << endl;
    }

    return 0;
}