#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define STR 15
#define MAXSTR 100
int main()
{
	char strs[STR][MAXSTR];
	int maior, menor; //quantidade de characters
	int i, mais, mens, menor;
	for(i=0; i<STR; i++){
		printf("Digite uma sring de ate %d cars", MAXSTR);
		fgets(strs[i], MAXSTR, stdin);
		strtok(strs[i], "\n");
		tam = strlen(strs[i]);
		if(i==0){
			maior = tam;
			menor = tam;
			mais=i;
			mens=i;
		}
		if(tam>maior){
			maior=tam;
			mais=i
		}
		if(tam<menor){
			menr = tam;
			mens = i;
		}
	}
	printf("Maior tem %d cars = %s\n", maior, strs[mais]);
	printf("Menor tem %d cars = %s\n", mens, strs[mens]);
	
	maior= 0; // strs[0] é a maior em ordenamento
	for(i=0; i<STR; i++){
		if(strcmp(strs[i], strs[maior])){
			maior=i;
			
		}
	}
	printf("Quem vem por ultimo e %s\n",strs[maior]);
}
