#include<stdio.h>
int main()
{
    int c,arr[1000],size,location,maximum;
    int find_maximum(int arr[],int size);
    printf("Input number of elements in array\n");
    scanf("%d",&size);
    printf("Enter %d integers:\n ",size);
    for(c=0;c<size;c++)
        scanf("%d",&arr[c]);
    maximum=find_maximum(arr,size);
    printf("Maximum element=%d",maximum);

    return 0;
}
int find_maximum(int a[],int n)
{
    int c,max;
    max=a[0];
    for (c=1;c<n;c++){
        if(a[c]>max){
            max=a[c];
        }
    }
    return(max);
}
