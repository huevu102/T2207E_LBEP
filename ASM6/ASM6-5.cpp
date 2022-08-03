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
	
	int min;
	int count = 0;
	for(int i=0; i<n; i++){
		if(arr[i]>0){
			min = arr[i];
			count = 1;
			break;
		}
	}

	if(count==0){
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
