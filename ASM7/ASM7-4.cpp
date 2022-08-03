#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Enter n = ");
	scanf("%d", &n);
	
	int arr[n];
	printf("Please enter %d integer(s):\n", n);
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	int max = arr[0];
	int min = arr[0];
	for(int i=1; i<n; i++){
		if(arr[i] > max){
			max = arr[i];
		}
		if(arr[i] < min){
			min = arr[i];
		}
	}

	int i = abs(max)-abs(min);
	int x;

	if(i > 0){
		int x = abs(max);
	}else{
		x = abs(min);
	}

	printf("So x la %d.", x);

}