//  Take input from user for array elements prints vowel in characters.
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
    printf("Vowel Character \n");
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u'){
            printf("%c\n",arr[i]);
        }
    }
    return 0;
}