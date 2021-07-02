#include<stdio.h>
int main()
{
    int n,i,j,k;
     printf("Enter number of lines: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i+(i-1);k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
