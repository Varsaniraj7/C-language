//  Write a Program to find the average of a given 2D array.
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
    float avg=1;
    int sum=0;
    for(int i = 0 ; i < row ; i++){
        for(int j=0 ; j < col ; j++){
            sum += arr[i][j];
        }
    }
    avg = (float)sum / (float)(row*col);
    printf("Average => %.2f",avg);
    return 0;
}