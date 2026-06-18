#include <stdio.h>

void solve()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i <= n-1 ; i++)
    scanf("%d",&arr[i]);

    for(int i = 1; i <= n-1; i++){
        int temp = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

    printf("%d\n",(arr[n-1] - arr[0])+1);
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