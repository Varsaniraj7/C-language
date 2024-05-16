// Write a Program to print and find the sum of all elements of a given row & column from a 2D array.
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the array's row size : ");
    scanf("%d",&r);
    printf("Enter the array's column size : ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter Array's elements : \n");
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            printf("Enter arr[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int row,rowsum=0;
    printf("Enter row number : ");
    scanf("%d",&row);
    printf("Elements of row %d : ",row);
    for(int j = 0 ; j < c ; j++){
        printf("%d \t",arr[row][j]);
        rowsum += arr[row][j];
    }
    printf("\nThe sum of a row %d : %d",row,rowsum);

    int col,colsum=0;
    printf("\nEnter row number : ");
    scanf("%d",&col);
    printf("Elements of row %d : ",col);
    for(int i = 0 ; i < r ; i++){
        printf("%d \t",arr[i][col]);
        colsum += arr[i][col];
    }
    printf("\nThe sum of a row %d : %d",col,colsum);
}