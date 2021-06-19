#include<stdio.h>
int main ()
{
    int a,sq;
    scanf("%d",&a);

    sq=square(a);
    printf("The square of %d is %d",a,sq);
}
int square(int x)
{
    int y;
    y=x*x;
    return y;
}
