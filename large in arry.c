#include<stdio.h>

int main ()
{
    int n,i;
    float arr[100];
    printf("Enter number of elements:\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter Number%d:",i+1);
        scanf("%f",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[0]<arr[i])arr[0]=arr[i];
    }
    printf("Largest element=%.2f",arr[0]);

    return 0;
}
