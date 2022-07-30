#include <stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);

	int i=n-1, max=0;

	while(i>0){
		if(i%2==0 && i%3==0){
			max = i;
			break;
		}
		i--;
	}
	printf("Gia tri can tim: %d", max);
}