#include<stdio.h>

int main ()
{
    int x,i,count=0;
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        if(x%i==0){

        printf("%d\n",i);
    }
    }
}
