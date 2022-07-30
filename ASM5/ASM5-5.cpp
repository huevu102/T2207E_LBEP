#include <stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);

	int max = 0;

	for( ; n>0; ){
		int i = n%10;
		if(i > max){
			max = i;
		}
		n = n/10;
	}
	printf("Chu so lon nhat la: %d", max);
}