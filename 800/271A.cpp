#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    
    while(true)
    {
        n++;
        int temp = n;
        int d= temp % 10;
        temp /= 10;
        int c = temp % 10;
        temp /= 10;
        int b = temp % 10;
        temp /= 10;
        int a = temp;
        if(a != b && a != c && a != d && b != c && b != d && c !=  d)
        break;
    }
    cout<<n<<endl;
    return 0;
}