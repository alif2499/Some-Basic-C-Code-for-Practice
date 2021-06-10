#include<stdio.h>

int main ()
{
    int m,c,E;

    printf("Enter the value of mass,m\n");
    scanf("%d",&m);

    printf("Enter the value of light speed,c\n");
    scanf("%d",&c);

    E=m*c*c;

    printf("Energy=%d*%dequals%d\n",m,c,E);

    return 0;
}
