#include <stdio.h>
int main(){
	// enter a,b,c
	int a,b,c;
	printf("Please enter a,b,c:\n");
	scanf("%d%d%d", &a, &b, &c);
	
	// min
	int min;
	min = a;
	
	// b < min
	if(b < min){
		// yes
		min = b;
		// c <  min
		if(c < min){
			//yes
			min =c;
		}
	}else{
		// no -> c < min
		if(c < min){
			min = c;
		}
	}
	
	// display
	printf("Min: %d", min);
}
