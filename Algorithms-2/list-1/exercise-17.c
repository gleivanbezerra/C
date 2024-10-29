#include <stdio.h>
#include <string.h>
#include<ctype.h>
#define MAX 50

void ordena(char arr[]){
	char tmp; 
	for(int i=0; i<strlen(arr)-1; i++){
		for(int j=i+1; j<strlen(arr); j++){
			if(arr[i] > arr[j]){
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

int main(void){
	
	char arr[MAX], rep;

	do{
		printf("Envie a string para ordenar: ");
		fgets(arr, sizeof(arr), stdin);

		ordena(arr);
	
		printf("%s", arr);
		do{
			printf("\n\nDeseja enviar outra string? (S/N)\n");
			rep = toupper(fgetc(stdin));
			fgetc(stdin);
		} while(rep != 'N' && rep != 'S');
	} while(rep == 'S');
	
	return 0;
}

