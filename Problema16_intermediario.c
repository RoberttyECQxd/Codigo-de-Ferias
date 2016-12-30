#include <stdio.h>

int main(){
	
	int qtd = 0, inicio = 0, final = 0, i = 0, j = 0;
	
	scanf("%d", &qtd);
	int tempos[qtd];
	
	while(i < qtd){
		scanf("%d %d",&inicio, &final);
		tempos[i] = final - inicio;
		i++;
	}
	
	double media = tempos[0];
	int maior = tempos[0], menor = tempos[0];
	
	for(i = 1; i < qtd; i++){
		if(tempos[i] > maior)
			maior = tempos[i];
		if(tempos[i] < menor)
			menor = tempos[i];
		media += tempos[i];
	}
	
	media = media / (qtd * 1.0);
	
	int moda = -1, freq = 0;
	
	for(i = 0; i < qtd; i++){
		int test = 0, freqaux = 0;
		for(j = i - 1; j >= 0; j--){
			if(tempos[j] == tempos[i]){
				test = 1;
				break;
			}
		}
		if(test == 1){
			break;
		}
		for(j = i; j < qtd; j++){
			if(tempos[j] == tempos[i])
				freqaux++;
		}
		if(freqaux > freq){
			freq = freqaux;
			moda = tempos[i];
		}else if(freqaux == freq){
			moda = -1;
		}
	}
	
	printf("%d\n", menor);
	printf("%d\n", maior);
	printf("%d\n", moda);
	printf("%.1f\n", media);
	
	return 0;
}
