#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<pair<int, int>> vip;
#define MOD 1000000007
#define PI 3.141592653589793238462
#define w(x)            int x;cin>>x;while(x--)
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define int              long long
#define pb              push_back
#define ff              first
#define ss              second
#define mp              make_pair
#define all(x) (x).begin(), (x).end()
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
int gcd(int a, int b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
bool comp(int a, int b) {return a > b;}
signed main() {
    Mostafa

    // https://codeforces.com/problemset/problem/2050/B

    w(x) {
        int n; cin >> n;
        int oddSum = 0, evenSum = 0, oddEl = 0, evenEl = 0;

        for (int i = 1; i <= n; i++) {

            int x; cin >> x;

            if (i & 1) {
                oddSum += x;
                oddEl++;
            } else {
                evenSum += x;
                evenEl++;
            }
        }

        int totalSum = oddSum + evenSum;
        if (totalSum % n != 0) {
            no;
        } else {
            int val = totalSum / n;

            cout << (oddSum / oddEl == val && evenSum / evenEl == val ? "YES" : "NO") << endl;
        }
    }
    return 0;
}