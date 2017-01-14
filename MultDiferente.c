#include <stdio.h>

int multiplicar(int a, int b){
	if(b == 0) return -1;
	if(a == 1) return 0;
	a /= 2;
	b *= 2;
	if(a % 2 == 0){
		return multiplicar(a, b);
	}
	else
		return b + multiplicar(a, b);
}

int main(){
	
	int x, y, result;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &x);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &y);
	
	result = multiplicar(x, y);
	printf("O resultado é: %d\n",result);
	
	return 0;
}
