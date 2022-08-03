#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Enter n = ");
	scanf("%d", &n);
	
	int arr[n];
	printf("Please enter %d integer(s):\n", n);
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	int x;
	printf("Enter x = ");
	scanf("%d", &x);

	int value = arr[0];
	int min = abs(x - arr[0]);

	for(int i=1; i<n; i++){
		int absolute = abs(x - arr[i]);
		if(absolute < min){
			min = absolute;
			value = arr[i];
		}
	}

	printf("Gia tri gan gia tri %d nhat la: %d.", x, value);
}