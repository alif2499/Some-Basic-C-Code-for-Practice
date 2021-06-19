#include<stdio.h>

int main()
{
    int factorial (int n);
    int n;
    printf("n= ");
    scanf("%d",&n);

    printf("n!=%d \n",factorial(n));
}
int factorial (int n)
{
    if(n<=1)
        return (1);
    else
        return (n*factorial(n-1));
}
