#include<stdio.h>

int main()
{
    int n,i,fact=1;
    printf("Enter a number:");
    scanf("%d",&n);
     printf("Factorials%d",n);

     i=n-1;

     while(i>0){
        printf("*%d",i);
        i=i-1;
     }
     i=1;
     while (i<=n){
        fact=fact*i;
        i=i+1;
     }
     printf("=%d",fact);

     return 0;
}
