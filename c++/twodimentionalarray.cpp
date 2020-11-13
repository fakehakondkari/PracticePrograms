#include <stdio.h>
int main()
{
  int arr[2][4],i,j;
    printf("enter the value of array:");
    for(i=0;i<2;i++){
     for(j=0;j<4;j++){
         printf("Enter arr[%d][%d]:",i,j);
             scanf("%d",&arr[i][j]);
            
     }
     
    }
    for(i=0;i<2;i++){
     for(j=0;j<4;j++){
         printf("arr[%d][%d]:%d",i,j,arr[i][j]);
             
     }
    }
}
