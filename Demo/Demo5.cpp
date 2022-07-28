#include <stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	int S = 0;
	int i = 1;


	while(i <= n){
		S = S + i;
		i++;
	}
	
	printf("S = %d", S);
}