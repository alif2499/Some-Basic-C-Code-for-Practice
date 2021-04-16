#include<stdio.h>
int main()
{
    int i,j,n,a,arr[1000];
    printf("Enter number of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0,j=i+1;i<n,j<n;++i,++j)
    {
        if(arr[i]>arr[j])
        {
            a=arr[i];
            arr[i]=arr[j];
            arr[j]=a;
        }
    }
    printf("Array in ascending order:\n ");
    for(i=0;i<n;++i)
        printf("%d\n",arr[i]);
}
