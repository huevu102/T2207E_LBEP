#include <stdio.h>
int main(){
	int n;
	printf("Enter n = ");
	scanf("%d", &n);

	float S = 0;
	for(int i=1; i<=n; i++){
		S = S + (float)1/i;
	}

	printf("S = %.2f", S);
}