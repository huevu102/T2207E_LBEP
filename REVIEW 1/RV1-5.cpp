#include <stdio.h>
int main(){
	int n;	// n > 0
	printf("Enter n = ");
	scanf("%d", &n);

	int arr[n];
	printf("Please enter %d integer(s):\n", n);
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	int max = 0;
	int p;

	for(int i=0; i<n; i++){
		int count = 0;
		for(int j=0; j<i; j++){
			if(arr[i]==arr[j]){
				count++;
				if(count > max){
					max = count;
					p = i;
				}
			}
		}
	}

	if(max==0){
		printf("The given array has no duplicate values.");
	}else{
		printf("The number that appears most in the given array is %d.", arr[p]);
	}
}