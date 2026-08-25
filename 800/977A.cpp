#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin>>n>>k;

    for(int i = k; k != 0 ; k--)
    {
        int lastDigit = n % 10;
        if(lastDigit != 0)
        n--;
        else 
        n = n/10;

    }
    cout<<n<<endl;

    return 0;
}