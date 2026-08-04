#include <stdio.h>

void solve()
{
    int a,b,n;
    scanf("%d %d %d",&a,&b,&n);
    int count = 0;
    int min = a >= b ? b : a;
    int max = b >= a ? b : a;
    while(a <= n && b <= n)
    {
        if (a < b)
        a+=b;
        else
        b+=a;
        count++;
    }
    printf("%d\n",count);
}

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        solve();
    }

    return 0;
}