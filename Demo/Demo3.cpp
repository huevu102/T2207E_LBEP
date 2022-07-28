#include <stdio.h>
int main(){
	// input a,b
	int a;
	printf("Please input a = ");
	scanf("%d", &a);

	int b;
	printf("Please input b = ");
	scanf("%d", &b);

	// if a > b
	if(a > b){
		// yes
		printf("Max: %d", a);
	}else{
		// no
		if(a < b){
			// yes
			printf("Max: %d", b);
		}else{
			// no
			printf("Equal");
		}
	}
}