// Find vowels in string using TSRS .
#include<stdio.h>
int vowel(char str[]){
    int count = 0;
    for(int i = 0 ; str[i] != NULL ; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            count++;
        }
    }
    return count;
}
int main(){
    char str[100];
    printf("Enter Any String : ");
    gets(str);
    printf("%d",vowel(str));
    return 0;
}