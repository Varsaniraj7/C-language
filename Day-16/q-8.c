// **Reverse an array.**
//    - Implement a function to reverse the elements of an array.
#include<stdio.h>
int main(){
    int n;
    printf("Enter Array Size : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        printf("a[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("Reserve element in array \n");
    for(int i = n-1 ; i >= 0 ; i--){
        printf("%d\n",arr[i]);
    }
    return 0;
}