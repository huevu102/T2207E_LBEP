#include <stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);

	int m = 0;

	for(int i=1; i<=n; i++){
		if(n%i==0){
			m = m + i;
		}
	}

	printf("Tong cac uoc la %d", m);
}