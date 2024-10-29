#include <stdio.h>
#include <string.h>
#define MAX 30

void converte(char str[MAX])
{
    for(int i = 0; i < strlen(str); i++){
        if(str[i] >= 65 && str[i] <= 90){
            str[i] += 32; 
        }
    }
}

int main()
{
    char str[MAX];
        
    printf("Digite os caracteres que deseja converter de maiúsculo para minúsculo: ");
    fgets(str, MAX, stdin);
    
    converte(str);
    
    printf("Caracteres convertidos: %s", str);

    return 0;
}

