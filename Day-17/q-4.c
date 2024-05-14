// Take input from user for array elements prints it's  characters.
#include<stdio.h>
int main(){
    int n;
    printf("Enter Array Size : ");
    scanf("%d",&n);
    char arr[n];
    for(int i = 0 ; i < n ; i++){
        printf("Enter A[%d] : ",i);
        scanf(" %c",&arr[i]);
    }
    for(int i = 0 ; i < n ; i++){
        printf("%c\n",arr[i]);
    }
    return 0;
}