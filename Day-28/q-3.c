// Print value of string using scale of pointer.
#include<stdio.h>
main(){
    char array[]= {"raj"};
    char *p;
    p=&array;
    for(int i=0; array[i] != NULL; i++){
        printf("%u %c\n",p+i,*(p+i));
    }
}