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

string s;
int a[1000][1000];

signed main() {
    Mostafa

    int T, n, m, i, j, cx, cy, csum;

    w(x) {

        cin >> n >> m >> s;

        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++) cin >> a[i][j];
        }

        cx = 0;
        cy = 0;

        for(i = 0; i < s.length(); i++)
        {
            if(s[i] == 'D')
            {
                csum = 0;
                for(j = 0; j < m; j++) csum += a[cx][j];
                a[cx][cy] =- csum;
                cx++;
            }
            else
            {
                csum = 0;
                for(j = 0; j < n; j++) csum += a[j][cy];
                a[cx][cy] =- csum;
                cy++;
            }
        }
        csum = 0;
        for(i = 0; i < m; i++) csum += a[cx][i];

        a[cx][cy] =- csum;

        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++) cout << a[i][j] <<' ';
            cout << endl;
        }
    }
    return 0;
}