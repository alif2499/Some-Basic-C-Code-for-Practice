#include<stdio.h>
int main ()
{
    int x,y,lcm;
    printf("Enter any two numbers:");
    scanf("%d%d",&x,&y);
    lcm=(x>y)?x:y;

    while (lcm){
        if (lcm%x==0&&lcm%y==0){
            printf("%d",lcm);
            break;
        }
        else if(++lcm){
                if (lcm%x==0&&lcm%y==0){
            printf("%d",lcm);
            break;

        }
    }
    }
    return 0;
}
