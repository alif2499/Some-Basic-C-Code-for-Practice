#include<stdio.h>
int main()
{
    int ax[6]={1,2,3,4,5,6};
    int i;
    for(i=0;i<6;i++){
        if(i%2==1){
                ax[i]=ax[i]+i;
       // printf("%d\n",ax[i]);

        }
    }
    for(i=0;i<6;i++){
    printf("%d\n",ax[i]);}
}
