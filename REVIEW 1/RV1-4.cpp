#include <stdio.h>
int main(){
	int n;	// n > 0
	printf("Enter n = ");
	scanf("%d", &n);

	int arr[n];
	printf("Please enter %d integer(s):\n", n);
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	for(int i=0; i<n; i++){
		printf("%d\n", arr[n-1-i]);
	}
}