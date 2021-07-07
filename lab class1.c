#include<stdio.h>

int main ()
{
    int u,a,s,t;

    printf("Enter the value of initial velocity,u and time,t and accelaration,a\n");
    scanf("%d%d%d",&u,&t,&a);

    s=(u*t)+(0.5*a*t*t);

    printf("displacemant=%d\n",s);

    return 0;
}


