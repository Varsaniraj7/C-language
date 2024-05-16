// Write a Program to find the transpose matrix of a given 2D array.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the array's row & column size : ");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter Array's elements : \n");
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            printf("Enter arr[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The transpose matrix of an array : \n");
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}