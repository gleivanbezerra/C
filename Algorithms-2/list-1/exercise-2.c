#include <stdio.h>
#include <string.h>
#define MAX 30

void converte(char str[MAX])
{
    for(int i = 0; i < strlen(str); i++){
        if(str[i] >= 97 && str[i] <= 122){
            str[i] -= 32; 
        }
    }
}

int main()
{
    char str[MAX];
        
    printf("Digite os caracteres que deseja converter de minúsculo para maiúsculo: ");
    fgets(str, MAX, stdin);
    
    converte(str);
    
    printf("Caracteres convertidos: %s", str);

    return 0;
}