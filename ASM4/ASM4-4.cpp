#include <stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);

	int m;
	int i = 0;

	while(n > 0){
		m = n % 10;
		i = i * 10 + m;
		n = n / 10;
	}

	printf("So dao nguoc la %d", i);
}