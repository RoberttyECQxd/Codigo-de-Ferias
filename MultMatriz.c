#include<stdio.h>

int main(){
	
	int i,j,k,r,s,t,u,result;
	
	printf("Digite o numero de linhas e colunas da matriz 1: ");
	scanf("%d %d",&r,&s);
	
	int m1[r][s];
	
	for(i = 0; i < r; i++){
		for(j = 0; j < s; j++){
			printf("Digite Matriz1[%d][%d]: ",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	
	printf("Digite o numero de linhas e colunas da matriz 2: ");
	scanf("%d %d",&t,&u);
	
	int m2[t][u];
	
	for(i = 0; i < t; i++){
		for(j = 0; j < u; j++){
			printf("Digite Matriz2[%d][%d]: ",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	
	if(s != t){
		printf("Nao eh possivel a multiplicacao\n");
		return 0;
	}
	
	int m3[r][u];
	
	for(i = 0; i < r; i++){
		for(j = 0; j < u; j++){
			result = 0;
			for(k = 0; k < s; k++)
				result += m1[i][k] * m2[k][j];
			m3[i][j] = result;
		}
	}
	
	for(i = 0; i < r; i++){
		for(j = 0; j < u; j++){
			printf("\t%d ",m3[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
