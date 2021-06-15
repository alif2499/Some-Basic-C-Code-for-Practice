#include<stdio.h>
main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf(" ",function(n));
    return 0;

}
int function(int n)
{
    if (n%2==0)
    {
        printf("even");
    }
    else
    {printf("odd");}

    return 0;


}
