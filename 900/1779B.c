#include <stdio.h>

void solve()
{
    int n;
    scanf("%d",&n);

    int a,b;
    int p = 0;
    int max = 0;
    int count = 0;
    if(n %2 == 0 )
    {
        a = 1;
        b = (-1);
        p = 1;
        max = n/2;
    }
    else if(n %2 != 0 && n != 3)
    {
        a = (n-3)/2;
        b = (1-n)/2;
        p = 1;
        max = (n/2)+1;
    }
    else printf("NO\n");
    if(p)
    {
        printf("YES\n");
        for(int i = 0 ; i < max ; i++)
        {
            if(count < n)
            {
            printf("%d ",a);
            count++;
            }
            if(count < n)
            {
            printf("%d ",b);
            count++;
            }
        }
        printf("\n");
    }
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