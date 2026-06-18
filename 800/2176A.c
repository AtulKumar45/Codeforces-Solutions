#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    for (int i = 1; i < t; i++)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int j = 0; j <= n-1; j++){
            scanf("%d",&arr[i]);
        }
    }
    
    return 0;
}