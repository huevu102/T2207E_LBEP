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
	
	int max = 0;
	int total = 0;
	
	for(int i=0; i<n; i++){
		if(arr[i]>0){
			total = total + arr[i];
			if(max<total){
				max = total;
			}
		}else{
			total = 0;
		}
	}
	
	printf("Chuoi so duong co tong lon nhat la %d.", max);
}
