// Write a Program to find all the negative elements from a given 1D array.
#include<stdio.h>
int main(){
    int n;
    printf("Enter Array size : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        printf("a[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    printf("Negative Element form an array : \n");
    for(int i = 0 ; i < n ; i++){
        if(arr[i] < 0){
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}