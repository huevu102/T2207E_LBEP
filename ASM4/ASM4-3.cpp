#include <stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);

	int i = 1;

	printf("Cac uoc cua %d la:\n", n);

	while(i<=n){
		if(n%i == 0){
			printf("%d\n", i);
		}
		i++;
	}
}