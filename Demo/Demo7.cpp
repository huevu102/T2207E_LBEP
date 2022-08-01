#include <stdio.h>
int main(){
	int n;
	printf("Nhap n = \n");
	scanf("%d", &n);

	int arr[n];
	int i, j, k, high, second;

	printf("Hay nhap %d so nguyen:\n", n);
	for (i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	high = arr[0];
	for(i=1; i<n; i++){
		if(arr[i] > high){
			high = arr[i];
		}
	}

	if(arr[0]==high){
		second = arr[1];
		for(j=2; j<n; j++){
			if(arr[j] > second && arr[j] != high){
				second = arr[j];
			}
		}
	}else{
		second = arr[0];
		for(j=1; j<n; j++){
			if(arr[j] > second && arr[j] != high){
				second = arr[j];
			}
		}
	}

	printf("Gia tri lon nhat va gan lon nhat là: %d và %d", high, second);
}
