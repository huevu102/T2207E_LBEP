#include <stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);

	for( ; n>0; ){
		int i = n/10;
		if(i<10){
			printf("Chu so dau tien la: %d", i);
			break;
		}
		n = i;
	}
}