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

	printf("Doan chua tat ca cac gia tri trong mang la [%d, %d].", max, min);
}