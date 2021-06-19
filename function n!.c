#include<stdio.h>
main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("fact=%d",fact(n));
    return 0;

}
int fact(int n,int i,int fact)
{

    fact=1;
    for(i=1;i<=n;i++){
    fact=fact*i;
    }

return fact;
}
