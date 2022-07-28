#include <stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);

	if(n > 6){
		int i = n % 6;
		int m = n - i;
		printf("So lon nhat nho hon %d va chia het cho ca 2 va 3 la %d", n, m);
	}else{
		printf("So lon nhat nho hon %d va chia het cho ca 2 va 3 la 0", n);
	}
}