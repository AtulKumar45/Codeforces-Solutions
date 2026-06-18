#include<stdio.h>

int main(){
    long long int n,k;
    scanf("%lld %lld",&n,&k);
    int arr[n];
    
        long long int j = 0;
        long long int l = n % 2;
        for(long long int i  = 0; i <= n-1 ; i++)
        {
            if((i+1) % 2 != 0)
            {
                arr[j] = i+1;
                j++;
            }
            else 
            {
                arr[(n/2) + l] = (i+1);
                l++;
            }
        }

        printf("%d\n",arr[k-1]);
    
      return 0;
}