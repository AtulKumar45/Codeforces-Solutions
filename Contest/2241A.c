#include <stdio.h>

void solve()
{
    int x,y;
    scanf("%d %d",&x,&y);

    if(x < y)
    {
        printf("NO\n");
        return;
    }
    if(x % y == 0)
    {
        printf("YES\n");
    }
    else 
    printf("NO\n");

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