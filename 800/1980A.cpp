#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin>>n;
    cin>>m;
    string a;
    cin>>a;
    int freq[7] = {0};
    for(int i = 0 ; i < n ; i++)
    freq[a[i] - 'A']++;
    int k = 0;
    for(int i = 0; i < 7 ;i++)
    {
        if(freq[i] < m)
        k += (m-freq[i]);
    }
    cout<<k<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}