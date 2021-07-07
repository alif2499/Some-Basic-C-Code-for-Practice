#include<stdio.h>
int main()
{
    int arr[100],i,j,big,n;
    printf("Enter number of elements of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[0]<arr[i])
            arr[0]=arr[i];

    }
     printf("Large=%d",arr[0]);

}
