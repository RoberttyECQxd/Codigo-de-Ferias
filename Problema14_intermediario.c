#include <stdio.h>

struct Corredor{
	int distancia;
	double velocidade;
};

int main(){
	
	int qtdCompetidores = 0, tamanho = 0, giros = 0, tempo = 0, aux = 0;
	int i, j;
	
	scanf("%d",&qtdCompetidores);
	struct Corredor c[qtdCompetidores];
	
	for(i = 0; i < qtdCompetidores; i++){
		scanf("%d", &tamanho);
		scanf("%d", &giros);
		tempo = 0;
		for(j = 0; j < giros; j++){
			scanf("%d", &aux);
			tempo += aux;
		}
		c[i].distancia = tamanho * giros;
		c[i].velocidade = ((c[i].distancia * 1.0) / (tempo * 1.0));
	}
	
	int campeao = 0;
	
	for(i = 1; i < qtdCompetidores; i++){
		if(c[campeao].distancia <= c[i].distancia){
			if(c[campeao].distancia == c[i].distancia){
				if(c[campeao].velocidade < c[i].velocidade){
					campeao = i;
				}
			}else{
				campeao = i;
			}
		}
	}
	
	printf("%d\n",(campeao + 1));
	printf("%.1f\n",c[campeao].velocidade * 3.6);
	
	return 0;
}
