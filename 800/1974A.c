#include <stdio.h>

void solve()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int sc = 0;
    sc = (y + 1) / 2;
    int space = (15*sc) - (4*y);
    if (x <= space)
    printf("%d\n",sc);
    else
    {
        int remainx = x - space;
        sc += (remainx + 14) / 15;
        printf("%d\n",sc);
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