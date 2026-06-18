#include<stdio.h>


int main(){

    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i = 0; i <= n-1 ; i++){
        scanf("%d",&arr[i]);
    }
    int maxm = arr[0];
    for(int i = 1; i <= n-1; i++){
        arr[i] += maxm;
         if(arr[i] > maxm)
         maxm = arr[i];
    }
    for(int i = 0; i <= n-1; i++)
    printf("%d ",arr[i]);

    return 0;
}