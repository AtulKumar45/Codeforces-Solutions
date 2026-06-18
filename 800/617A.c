#include<stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    int i = 0;
    int count = 0;
    while(i < x)
    {
    if((x-i) >= 5){
    i += 5;
    count++;
    }
    else if((x-i) >= 4)
    { i+= 4; count++;
    }
    else if((x-i) >= 3) { i+= 3; count++;
    }
    else if((x-i) >= 2) { i+= 2; count++;
    }
    else { i++; count++;
    }
    }
    printf("%d",count);
    return 0;
}