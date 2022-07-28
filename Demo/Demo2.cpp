#include <stdio.h>
int main(){
	// input num
	int num;
	printf("Please input num = ");
	scanf("%d", &num);

	// r = num mod 2
	int r;
	r = num % 2;

	// r = 0
	if(r == 0){
		// run if YES
		printf("Number is Even.");
	}else{
		// run if NO
		printf("Number is Odd.");
	}
}