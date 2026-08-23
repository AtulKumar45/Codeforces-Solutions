#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x;
    cin>>x;
    int count = 0;
    int num = x % 10;;
    while(x > 0)
    {
        count++;
        x = x/10; 
    }
    cout<<(10*(num-1)) + ((count*(count+1))/2)<<endl; 
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