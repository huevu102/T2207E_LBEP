#include <stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);

	int arr[n];
	printf("Nhap vao %d so:\n", n);
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	int x;
	printf("Nhap x = ");
	scanf("%d", &x);
	for(int i=0; i<n; i++){
		if(arr[i]==x){
			printf("%d thuoc mang.", x);
		}
	}
}