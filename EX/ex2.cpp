#include <stdio.h>
#include "ex2.h"

int main(){
	int n;
	printf("Please input n = ");
	scanf("%d", &n);
	
	int arr[n];
	printf("Please input %d integer(s):\n", n);
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	int flag = 0;
	
	printf("Check the prime number(s) of the array:\n");
	
	for(int i=0; i<n; i++){
		if(checkPrime(arr[i])){
			printf("%d\n", arr[i]);
			if(flag==0){
				flag = 1;
			}
		}
	}
	
	if(flag==0){
		printf("No prime number.");
	}
}
