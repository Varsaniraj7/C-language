// Ask for four numbers and perform addition: print sum then multiply by 5 and divide by 2.

#include<stdio.h>
main(){
    int a,b,c,d,ans;
    printf("Enter First Value : ");
    scanf("%d",&a);
    printf("Enter Second Value : ");
    scanf("%d",&b);
    printf("Enter Third Value : ");
    scanf("%d",&c);
    printf("Enter Forth Value : ");
    scanf("%d",&d);
    ans=a+b+c+d;
    printf("Addition of four number : %d",ans);
    printf("\nAnswer multiply by 5 : %d",ans*5);
    printf("\nAnswer divided by 2 : %d",ans/2);
}