// Problem: "Make a program that reads a string and a character (vowel or consonant) and replaces
// all the vowels in the given string with that character."
// Author: Gleivan Bezerra

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 50

void troca(char str[], char ch){
    for(int i=0; i<strlen(str); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
        str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            str[i] = ch;
        }
    }
}

int main(void){

    char str[MAX], ch;

    printf("Envie a string: ");
    fgets(str, sizeof(str), stdin);
    do{
        printf("Envie o caractere (vogal ou consoante): ");
        ch = tolower(fgetc(stdin));
        if(ch < 97 || ch > 122){
            printf("\nCaractere invalido!\n\n");
        }
    } while(ch < 97 || ch > 122);

    troca(str, ch);
    
    printf("%s", str);

    return 0;
}