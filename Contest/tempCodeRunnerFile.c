#include <stdio.h>

void solve()
{
    int x,y;
    scanf("%d %d",&x,&y);

    int small =  x > y ? y : x ;
    int big = x > y ? x : y ;

    if(big % small == 0)
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