#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    
    int y = 0;

    while(1)
    {
        if(a > b)
        {
            printf("%d",y);
            return 0;
        }
        a = 3*a;
        b = 2*b;
        y++;
    }
   return 0;
}