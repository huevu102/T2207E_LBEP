#include <stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);

	int m = 0;

	for( ; n>0; ){
		int i = n % 10;
		m = m + i;
		n = n/10;
	}
	printf("Tong cac chu so la: %d", m);
}