// Write a Program to convert the given string in toggle case without using any string function.
#include<stdio.h>
int main(){
    char name[] = "HelLo worLD";
    for(int i = 0 ; name[i] != NULL ; i++){
        if(name[i] >= 'a' && name[i] <= 'z'){
            name[i] -= 32;
        }
        else if(name[i] >= 'A' && name[i] <= 'Z'){
            name[i] += 32;
        }
        printf("%c",name[i]);
    }
    return 0;
}