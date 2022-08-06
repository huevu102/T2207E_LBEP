#include <stdio.h>
int main(){
	int n;	// n > 0
	printf("Enter n = ");
	scanf("%d", &n);

	int arr[n];
	arr[1] = 1;
	arr[2] = 1;
	for(int i=3; i<=n; i++){
		arr[i] = arr[i-1] + arr[i-2];
	}

	printf("The %dth fibonacci number is %d.", n, arr[n]);
}