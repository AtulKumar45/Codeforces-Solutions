#include <stdio.h>

void solve()
{
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i = 0 ; i <= n-1 ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int x = 3;
    for(int i = 0 ; i <= n-1 ; i++)
    arr[i] += x;

    int p0 = 1;
    int p1 = 1;
    int p2 = 1;
    int p3 = 1;
    
    
    for(int i = 0; i <= n-1 ; i++)
    {
        if(arr[i] == 0)
        p0 = 0;
        else if(arr[i] == 1)
        p1 = 0;
        else if(arr[i] == 2)
        p2 = 0;
        else if(arr[i] == 3)
        p3 = 0;
    }
    if(p0)
    printf("0\n");
    else if(p1)
    printf("1\n");
    else if(p2)
    printf("2\n");
    else if(p3)
    printf("3\n");
    else
    printf("4\n");
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