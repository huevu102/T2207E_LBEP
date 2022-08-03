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
	
	int min = 0;
	for(int i=0; i<n; i++){
		if(arr[i]>0){
			min = arr[i];
			break;
		}
	}

	if(min==0){
		printf("The array has no positive.");	
	}else{
		for(int i=0; i<n; i++){
			if(arr[i]>0 && arr[i]<min){
				min = arr[i];
		}
	}
	
	printf("The minimum positive of the array is: %d", min);
	}
}
