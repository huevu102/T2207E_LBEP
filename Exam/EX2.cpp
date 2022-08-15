#include <stdio.h>

int main(){
	int n;
	printf("Please enter n = ");
	scanf("%d", &n);

	int arr[n];
	printf("Please enter %d integer(s):\n", n);
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	int flag = 0;

	for(int i=0; i<n; i++){
		if(arr[i]<=1){
			flag = 1;
		}else{
			for(int j=2; j<=arr[i]/2; j++){
				if(arr[i]%j==0){
					flag = 1;
					break;
				}else{
					flag = 0;
				}

				if(flag==0){
					printf("%d", arr[i]);
				}
			}
		}

		if(flag==1){
			printf("No prime number.\n");
		}
	}
}