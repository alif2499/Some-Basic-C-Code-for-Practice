#include<stdio.h>
int main()
{
    int x,sq;
    scanf("%d",&x);
    sq=square(x);
    printf("Square of input is=%d",sq);
}
int square(int a)
{
    int temp;
    temp=a*a;
    return(temp);
}
