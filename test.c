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
//	printf("%d\n", tam);
	fseek(arq, 0, SEEK_SET);

	char msg[tam+1];


	fscanf(arq, "%[^\n]", &msg[0]);
	fclose(arq);

	printf("MENSAGEEEEEEEEEEEEEM: %s",msg);

return 0;
}

