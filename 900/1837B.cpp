#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int curr = 1;
    int maxm = 1;
    for(int i = 1; i < n;i++)
    {
        if(s[i] == s[i-1])
        curr++;
        else  curr = 1; 
     maxm = max(maxm,curr);
    }
    cout<<maxm+1<<endl;
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