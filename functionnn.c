#include<math.h>
void main ()
{
    int a,b,m;
    int big(int a,int b);
    scanf("%d %d",&a,&b);

    m=big(a,b);
    printf("Max=%d",m);
}
int big(int a,int b)
{
    if(a>b)
        return (a);
        else
        return(b);
}

