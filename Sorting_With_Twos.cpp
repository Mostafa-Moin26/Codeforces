#include<bits/stdc++.h>

using namespace std;

#define w(x)            int x;cin>>x;while(x--)
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {

    Mostafa

    // https://codeforces.com/problemset/problem/1891/A

    w(x) {
        int n; cin >> n;

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];

        bool flag = true;
        int p = 1;

        for (int i = 1; i < n; ++i) {

            if (p < i) p *= 2;

            if (arr[i] < arr[i - 1]) {
                if (p != i) flag = false;
            }
        }

        if (flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }


    return 0;
}