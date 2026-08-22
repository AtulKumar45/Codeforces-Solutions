#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    if(s[1] == 'b')
    {
        cout<<"YES"<<endl;
        return;
    }
    else if(s[2] == 'b' && s[1] == 'c')
    {
        cout<<"YES"<<endl;
        return;
    }
    else if(s[0] == 'b' && s[1] == 'a')
    {
        cout<<"YES"<<endl;
        return;
    }
    else
    cout<<"NO"<<endl;

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