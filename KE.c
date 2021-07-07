
#include<stdio.h>



int main ()
{
    int E,x,m,v;

    printf("Enter the value of mass,m\n");
    scanf("%d",&m);

    printf("Enter the value of velocity,v\n");
    scanf("%d",&v);

    E=0.5*m*v*v;

    printf("Kinetic Energy=%d*%dequals%d\n",m,v,E);

    return 0;
}

