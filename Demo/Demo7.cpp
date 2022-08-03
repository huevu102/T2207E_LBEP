#include <stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);

	int arr[n];
	int high;

	printf("Hay nhap %d so nguyen:\n", n);
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	high = arr[0];
	for(int i=1; i<n; i++){
		if(arr[i] > high){
			high = arr[i];
		}
	}
	printf("Gia tri lon nhat la %d", high);

	int second = high;
	for(int i=0; i<n; i++){
		if(arr[i] < high){
			second = arr[i];
			break;
		}
	}

	if(second == high){
		printf("Mang khong co gia tri lon nhat.");
	}else{
		for(int i=0; i<n; i++){
			if(arr[i] > second && arr[i] < high){
				second = arr[i];
			}
		}
	printf("Gia tri gan lon nhat là %d", second);	
	}
}
