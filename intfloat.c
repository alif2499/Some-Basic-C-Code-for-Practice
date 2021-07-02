#include<stdio.h>
#include<float.h>

int main()
{
    int x;

    float y,z;
    printf("Enter an integer\n");
    scanf("%d",&x);
    printf("Enter a float\n");
    scanf("%f",&y);

    z=x+y;
    printf("The value of%d+%fequals%f\n",x,y,z);

    return 0;
}
