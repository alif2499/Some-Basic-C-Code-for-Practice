
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
        printf("The greatest number is %d",a);
    else if(a>b && c<a)
        printf("The greatest number is %d",c);
    else if(b>a && b>c)
        printf("The greatest number is %d",b);
    else if (b>a && c>b)
        printf("The greatest number is %d",c);
    return 0;

}

