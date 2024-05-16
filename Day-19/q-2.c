// Write a Program to find the largest element from a given 2D array.
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
    int max = arr[0][0];
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    printf("The largest element is : %d",max);
    return 0;
}