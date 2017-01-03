#include <stdio.h>

void transformar(int value, int vet[]){
	
}

int main(){
	
	int M, N, K, i;
	
	scanf("%d %d %d", &N, &M, &K);
	
	int vetA[32];
	int vetB[32];
	int vetAux[K];
	
	transformar(N, vetA);
	transformar(M, vetB);
	
	for(i = 0; i < K; i++){
		vetAux[i] = vetA[i];
 	}
 	int ind = 0;
 	for(i = 0; i < 32; i++){
		if(ind == K){
			break;
		}
		if(vetA[i] == vetAux[ind])
			ind++;
		else{
			i = i - ind;
			ind = 0;
		}
 	}
	
	if(ind == K){
		printf("1\n");
	}else{
		printf("0\n");
	}
	
	return 0;
}
