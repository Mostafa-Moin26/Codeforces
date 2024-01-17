#include<bits/stdc++.h>

using namespace std;

#define w(x)            int x;cin>>x;while(x--)
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb              push_back

int main() {

    Mostafa

    // https://codeforces.com/contest/1841/problem/B

    w(x) {
        int n; cin >> n;

        vector<int> a(n), taken;
        string ans = "";
        bool broken = false;

        for (int i = 0; i < n; ++i) {

            cin >> a[i];

            if (taken.empty()) {

                ans.pb('1');
                taken.pb(a[i]);
            } else {

                if (broken) {

                    if (a[i] > taken[0]) {
                        ans.pb('0');
                    } else {

                        if (a[i] < taken.back()) {
                            ans.pb('0');
                        } else {
                            ans.pb('1');
                            taken.pb(a[i]);
                        }
                    }

                } else {

                    if (a[i] >= taken.back()) {
                        ans.pb('1');
                        taken.pb(a[i]);

                    } else {

                        if (a[i] > taken[0]) {
                            ans.pb('0');

                        } else {

                            broken = true;
                            ans.pb('1');
                            taken.pb(a[i]);
                        }
                    }
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}