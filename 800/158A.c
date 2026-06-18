#include<stdio.h>

int main(){

    int n ,k;
    scanf("%d %d",&n,&k);
    if(n >= k && k>= 1 && n <= 50)
    {
        int a[n];
        int count = 0;
        for(int i = 0; i <= n -1; i++)
            scanf("%d", &a[i]);
        for(int i = 0; i <= n-1; i++)
        {
            if(a[i]>= 0 && a[i] <= 100)
            {
                if(a[i] >= a[k-1] && a[i] > 0)
                count++; 
            }
            else
                return 0;
        }
        printf("%d", count);
    }

    return 0;
}