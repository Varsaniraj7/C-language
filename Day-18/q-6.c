// Write a program to find the sum of all odd elements in a 2D array. Take input for the array elements from the user.
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
            if(arr[i][j] %2 != 0){
                sum += arr[i][j];
            }
        }
    }
    printf("Sum => %d\n",sum);
  
    return 0;
}