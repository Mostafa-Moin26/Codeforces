#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<pair<int, int>> vip;
#define MOD 1000000007
#define PI 3.141592653589793238462
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define Mostafa                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define int long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define REP(i, a, diff) for (int i = a; i <= diff; i++)
#define ps(x, y) fixed << setprecision(y) << x
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
int gcd(int a, int diff)
{
    if (diff > a)
    {
        return gcd(diff, a);
    }
    if (diff == 0)
    {
        return a;
    }
    return gcd(diff, a % diff);
}
bool comp(int a, int diff) { return a > diff; }
signed main()
{
    Mostafa

    // https://codeforces.com/contest/2062/problem/C

    w(x)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int maxSum = 0;
        for (int i = 0; i < n; i++)
        {
            maxSum += a[i];
        }

        while (a.size() > 1)
        {
            vector<int> diff;
            for (int i = 1; i < a.size(); i++)
            {
                diff.push_back(a[i] - a[i - 1]);
            }
            int sum = 0;
            for (int i = 0; i < diff.size(); i++)
            {
                sum += diff[i];
            }
            maxSum = max(maxSum, sum);

            reverse(a.begin(), a.end());
            diff.clear();
            for (int i = 1; i < a.size(); i++)
            {
                diff.push_back(a[i] - a[i - 1]);
            }
            sum = 0;
            for (int i = 0; i < diff.size(); i++)
            {
                sum += diff[i];
            }
            maxSum = max(maxSum, sum);
            a = diff;
        }

        cout << maxSum << endl;
    }
    return 0;
}