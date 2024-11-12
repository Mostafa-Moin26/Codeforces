#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<pair<int, int>> vip;
#define MOD 1000000007
#define PI 3.141592653589793238462
#define w(x)            int x;cin>>x;while(x--)
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll              long long
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
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
bool comp(int a, int b) {return a > b;}
int main() {
    Mostafa

    // https://codeforces.com/contest/2028/problem/A

    w(x) {

        int n, a, b; cin >> n >> a >> b;
        string s; cin >> s;

        bool f = false;

        int x, y; x = y = 0;

        for (int p = 0; p <= 100; p++) {

            for (int i = 0; i < n; i++) {

                if (x == a && y == b) f = true;

                if (s[i] == 'N') y++;
                else if (s[i] == 'E') x++;
                else if (s[i] == 'S') y--;
                else x--;
            }
        }

        if (f) yes;
        else no;
    }
    return 0;
}