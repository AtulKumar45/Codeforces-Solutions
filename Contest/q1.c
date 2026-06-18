#include <stdio.h>

void solve()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i= 0; i <= n-1 ; i++)
    scanf("%d",&arr[i]);

    for(int i = 0; i < n -1 ; i++){
        for(int j = 0; j < n-i-1;  j++){
            if(arr[j] > arr[j+1])
            {
               int temp =  arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp;
            }
        }
    }
    int call = 0;
        for(int i = 0; i < n/2; i++)
        {
            if(arr[i] != arr[(n/2)+1 +i])
            call++;
        }
    printf("%d\n",call);    
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