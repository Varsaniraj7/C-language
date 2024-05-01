// Write a Program to print leap years between two given numbers using a while loop.
#include<stdio.h>
int main(){
    int start,end,year;
    printf("Enter starting year : ");
    scanf("%d",&start);
    printf("Enter Ending Year : ");
    scanf("%d",&end);
    while(start <= end){
        if ((start % 4 == 0 && start % 100 != 0) || (start % 400 == 0)) {
            printf("%d ", start);
        }
        start++;
    }
    return 0;
}