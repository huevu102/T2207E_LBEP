#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Enter n = ");
	scanf("%d", &n);
	
	int arr[n];
	printf("Please enter %d integer(s):\n", n);
	scanf("%d", &arr[0]);

	for(int i=1; i<n; i++){
		scanf("%d", &arr[i]);
		for(int j=0; j<i; j++){
			if(arr[i]==arr[j]){
				printf("Please enter different values.\n");
				i--;
				break;
			}
		}
	}
}