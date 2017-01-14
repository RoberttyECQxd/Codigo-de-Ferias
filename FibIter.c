#include <stdio.h>

long long int Fib(int n){
	long long int vet[n + 1], i;
	
	vet[0] = 0;
	vet[1] = 1;
	
	for(i = 2; i <= n; i++)
		vet[i] = vet[i - 1] + vet[i - 2];
	return vet[n];
}

int main(){
	
	int n;
	
	scanf("%d", &n);
	
	printf("%lld\n",Fib(n));
		
	return 0;
}
