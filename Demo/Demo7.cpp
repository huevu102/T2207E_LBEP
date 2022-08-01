#include <stdio.h>
int main(){
	int n;
	printf("Nhap n = \n");
	scanf("%d", &n);

	int arr[n];
	int i, j, high, second;

	printf("Hay nhap %d so nguyen:\n", n);
	for (i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	high = arr[0];
	second = arr[n-1];
	for(i=1; i<n; i++){
		if(arr[i] > high){
			high = arr[i];
		}
	}

	for(j=n-1; j>=0; j--){
		if(arr[j] > second && arr[j]!=high){
			second = arr[j];
		}
	}

	printf("Gia tri lon nhat va gan lon nhat là: %d và %d", high, second);
}
