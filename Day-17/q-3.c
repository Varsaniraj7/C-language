// Take input from user for array elements prints it's count of vowel.
#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter Array Size : ");
    scanf("%d",&n);
    char arr[n];
    for(int i = 0 ; i < n ; i++){
        printf("Enter A[%d] : ",i);
        scanf(" %c",&arr[i]);
    }
    printf("Vowel Count \n");
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u'){
            count++;
        }
        
    }
    printf("%d",count);
    return 0;
}