// Write a Program to print odd numbers from N to 1 using a while loop.
#include<stdio.h>
int main(){
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    while (n > 0)
    {
        if (n % 2 != 0)
        {
            printf("%d\n",n);
        }
        n--;
        
    }
    return 0;
}