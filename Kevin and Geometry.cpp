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

int a[200000];
vi v;

signed main() {
    Mostafa

    // https://codeforces.com/contest/2061/problem/B

    int n,i,p,flag;

    w(x) {
        cin>>n;

        for(i=0;i<n;i++)cin>>a[i];

        sort(a,a+n);

        p=-1;

        for(i=n-1;i>0;i--)
        {
            if(a[i]==a[i-1])
            {
                p=i-1;
                break;
            }
        }
        if(p==-1)
        {
            cout<<"-1\n";
            continue;
        }
        for(i=0;i<n;i++)
        {
            if(i==p||i==p+1)continue;
            v.push_back(a[i]);
        }

        flag=0;

        for(i=0;i+1<v.size();i++)
        {
            if(v[i]+a[p]*2>v[i+1])
            {
                flag=1;
                cout<<v[i]<<' '<<v[i+1]<<' '<<a[p]<<' '<<a[p]<<'\n';
                break;
            }
        }

        if(!flag)cout<<"-1\n";
        v.clear();
    }
    return 0;
}