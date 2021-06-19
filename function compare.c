#include<stdio.h>

int main()
{
    int a,b,c;
    int t1,t2;

    scanf("%d %d %d",&a,&b,&c);

    t1=greater(a,b);
    t2=greater(t1,c);


    printf("Greater number is=%d",t2);
}
int greater (int x, int y)
{
    if(x>y)
    {
        return(x);
    }
    else{
        return(y);
    }
}
