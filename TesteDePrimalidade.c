#include <stdio.h>
#include <math.h>
int main(){
	
	int N;
	
	scanf("%d",&N);
	
	int a = 1 + (rand() % (N-1));
	
	if((((int)pow(a, N-1)) % N) == 1)
		printf("primo\n");
	else
		printf("nao primo\n");
	
	return 0;
}
