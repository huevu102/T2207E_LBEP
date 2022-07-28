#include <stdio.h>
int main(){
	// enter a,b,c
	int a,b,c;
	printf("Please enter a,b,c:\n");
	scanf("%d%d%d", &a,&b,&c);
	
	// max
	int max;
	max = a;
	
	// b > max
	if(b > max){
		// yes
		max = b;
		// c > max
		if(c > max){
			// yes
			max = c;
		}
	}else{
		// no
		if(c > max){
			// yes
			max =c;
		}
	}
	
	// display
	printf("Max: %d", max);
}