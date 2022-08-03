#include <stdio.h>
int main(){
	int n;
	printf("Enter n = ");
	scanf("%d", &n);
	
	int arr[n];
	printf("Please enter %d integer(s):\n", n);
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	for(int i=n-1; i>=0; i--){
		if(arr[i]%2==1){
			printf("The last odd of the array is %d", arr[i]);
			break;
		}
		if(i==0){
			printf("The array has no odd.");
		}
	}
}

