#include <stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);

	int arr[n];
	printf("Nhap vao %d gia tri:\n", n);
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	int total = 0;
	int j = 0;
	for(int i=0; i<n; i++){
		if(arr[i]%2==1){
			total = total + arr[i];
			j = j + 1;
		}
	}

	float TBC = float(total)/j;

	printf("Trung binh cong la: %.2f", TBC);
}