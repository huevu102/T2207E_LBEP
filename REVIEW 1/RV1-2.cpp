#include <stdio.h>
int main(){
	int n;
	printf("Enter n = ");
	scanf("%d", &n);

	if(n<=1){
		printf("%d is not a prime number.", n);
	}else{
		int flag = 0;
		for(int i=2; i<n; i++){
			if(n%i==0){
				printf("%d is not a prime number.", n);
				flag = 1;
				break;
			}
		}

		if(flag==0){
			printf("%d is a prime number.", n);
		}
	}	
}