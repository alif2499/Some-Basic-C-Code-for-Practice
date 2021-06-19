#include<stdio.h>
int main()
{
    int  a,b,c,t1,t2;
    scanf("%d %d %d",&a,&b,&c);
    t1=minimum(a,b);
    t2=minimum(t1,c);

    printf("Minimum value is %d",t2);

}
int minimum(int x,int y)
{
    int temp;
    if(x>y){
        return y;
    }
    else{
        return x;
    }
}
