#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 2;
int a[10], p[N];
void solve()
{
    int n; scanf("%d", &n);
    if(p[n] > n) printf("-1\n");
    else for(int i = 1; i <= n; ++i) printf("%d%c", p[i], " \n"[i == n]);
}
int main()
{
    iota(p + 1, p + N, 1);
    a[1] = 1;
    for(int i = 1; a[i] < N; ++i)
    {
        swap(p[a[i]], p[a[i] + 1]);
        a[i + 1] = a[i] * 6 - a[i - 1] + 2;
    }
    int T; scanf("%d", &T);
    while(T--) solve();
    return 0;
}
