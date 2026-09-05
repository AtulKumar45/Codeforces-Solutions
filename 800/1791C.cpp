#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int ans = n;
    int i = 0;
    int j = n-1;
    while(1)
    {
        if(ans == 0)
        {
            cout<<"0\n";
            return;
        }
        if((str[i] == '0' && str[j] == '1') || str[i] == '1' && str[j] == '0')
        {
            ans -= 2;
            i++;
            j--;
        }
        else 
        {
            cout<<ans<<endl;
            return;
        }
    }
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