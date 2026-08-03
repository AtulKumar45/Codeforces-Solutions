#include <stdio.h>
#include <stdlib.h>

void solve()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int diff = abs(a-b);
    int count = (diff + 2*c - 1)/(2*c); 
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