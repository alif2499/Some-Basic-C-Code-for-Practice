#include<stdio.h>

int main ()
{
    int s,u,v,t;

    printf("Enter the value of initial velocity,u and final velocity,v and time,t\n");
    scanf("%d%d%d",&u,&v,&t);

    s=u+(v*t);

    printf("Displacement=%d+%d*%dequals%d\n",u,v,t,s);

    return 0;
}
