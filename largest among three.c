#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b){
        if(a>c){printf("Largest number is:%d",a);}
        else{
            printf("Largest number is:%d",c);
        }
    }
    else if(b>a){
        if(b>c){
            printf("Largest number is:%d",b);
        }
        else{
            printf("Largest number is:%d",c);
        }
    }
    return 0;
}
