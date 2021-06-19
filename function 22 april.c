#include<math.h>
void main()
{
     int a,b,max;
     scanf("%d %d",&a,&b);
     max=greater(a,b);
     printf("Maximum number is= %d",max);
}
int greater(int a,int b)
{

    if(a>b){
        return (a);
    }
    else {
        return(b);
    }
}

