#include <stdio.h>

int AlgEuclides(int a, int b){
	if(b == 0) return a;
	return AlgEuclides(b, a % b);
}

int main(){
	
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	printf("%d\n",AlgEuclides(a,b));
	
	return 0;
}
