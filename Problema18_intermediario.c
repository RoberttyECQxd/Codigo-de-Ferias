#include <stdio.h>
#include <string.h>
int main(){
	
	char vet[50];
	
	scanf("%s",vet);
	
	int i, aux;
	int tam = strlen(vet);
	
	for(i = 0; i < tam; i++){
		int a = vet[i];
		a -= 91;
		aux = a/3;
		printf("# %d=",aux);
		printf("%d\n",((a % 3) + 1));
	}
	
	return 0;
}
