#include<stdio.h>


int main(){
    int n, k;
    scanf("%d %d",&n,&k);

    char arr[n];

    for(int i = 0; i <= n-1; i++)
    scanf(" %c",&arr[i]);
    
    int max = 0;
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == '#')
        {
            count++;
            max = (max > count) ? max : count;
        }
        else
        count = 0;
    }
    if(max < k)
    printf("YES");
    else printf("NO");

   
    return 0;
}