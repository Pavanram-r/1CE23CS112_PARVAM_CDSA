#include<stdio.h>
int main(){
    int r;
    printf("Enter no. of rows:\n");
    scanf("%d",&r);
    int c;
    printf("Enter no. of cols:\n");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter the values of an array:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
   }
   printf("Printing the values of an array:\n");
   for(int i=0;i<r;i++){
       for(int j=0;j<r;j++){
           printf("%d\t",arr[i][j]);
    }
    printf("\n");
   }
}   