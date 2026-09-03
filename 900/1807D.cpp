#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;

    vector<long long> arr(n + 1);
    vector<long long> sumindex(n + 1);

    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        sumindex[i] = sumindex[i-1] + arr[i];
    }

    while(q--)
    {
        int l, r;
        long long k;

        cin >> l >> r >> k;

        long long rangesum = sumindex[r] - sumindex[l-1];

        long long newsum =
            sumindex[n] - rangesum + (r-l+1) * k;

        if(newsum % 2 == 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }

    return 0;
}