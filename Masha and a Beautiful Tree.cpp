#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define PI 3.141592653589793238462
#define Mostafa ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define w(x) int x;cin>>x;while(x--)
#define int long long
#define pb push_back
#define ff first
#define ss second
#define ps(x,y) fixed<<setprecision(y)<<x
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)

const int N = 3e5 + 10;

int n;
int a[N], b[N];
int cnt;

void merge_sort(int l, int r) {
    if(l >= r) return;

    int mid = (l + r) >> 1;

    merge_sort(l, mid);
    merge_sort(mid + 1, r);

    if(a[l] > a[r]) {
        cnt++;
        for(int i = l; i <= mid; i++) {
            swap(a[i], a[mid + i - l + 1]);
        }
    }
}

signed main() {
    Mostafa

    w(t) {
        cin >> n;

        cnt = 0;

        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            b[i] = a[i];
        }

        sort(b + 1, b + n + 1);

        merge_sort(1, n);

        int flag = 0;

        for(int i = 1; i <= n; i++) {
            if(a[i] != b[i]) {
                flag = 1;
                break;
            }
        }

        if(flag) {
            cout << "-1\n";
        }
        else {
            cout << cnt << "\n";
        }
    }

    return 0;
}
