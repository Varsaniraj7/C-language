// Write a program to find the sum of elements obtained by adding elements along the main diagonal and anti-diagonal of a 2D array row-wise. Take input for the array elements from the user.
#include<stdio.h>
int main(){
    int row,col;
    printf("Enter Row Size : ");
    scanf("%d",&row);
    printf("Enter Column Size : ");
    scanf("%d",&col);
    int arr[row][col];
    for(int i = 0 ; i < row ; i++){
        for(int j=0 ; j < col ; j++){
            printf("Enter arr[%d][%d] => ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(int i = 0 ; i < row ; i++){
        for(int j=0 ; j < col ; j++){
            if(i == j){
                sum += arr[i][j];
            }
        }
    }
    printf("Sum of diagonal => %d\n",sum);


    int sum1=0,i,j;
    for (i = 0, j = col - 1; i < row && j >= 0; i++, j--) {
        sum1 += arr[i][j];
    }
    printf("Sum of anti-diagonal => %d\n",sum1);
    return 0;
}