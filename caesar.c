#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

	FILE *arq = fopen("msg.txt","r");
	if(!arq){
		printf("erro de abertura de arquivo!");
		return(1);
	}
	
	fseek(arq, 0, SEEK_END);
	int tam = ftell(arq);
	printf("%d\n", tam);
	
	char msg[tam];
	fgets(msg, sizeof(msg), arq);
	printf("mensagem:  %s\n", msg);

fclose(arq);
return 0;
}

