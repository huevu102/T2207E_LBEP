#include <stdio.h>
#include <math.h>
int main(){
	// input a,b,c
	float a,b,c;
	printf("Please input a,b,c: \n");
	scanf("%f%f%f", &a, &b, &c);
	
	// delta
	float delta;
	delta = b*b - 4*a*c;
	
	// a # 0
	if(a == 0){
		printf("You must enter a > 0\n");
		return 0;
	}
	
	// delta < 0
	if(delta < 0){
		printf("No result for x\n");
	}
	
	// delta = 0
	if(delta == 0){
		float x = -b/(2*a);
		printf("x = %.2f\n", x);
	}
	
	// delta > 0
	if(delta > 0){
		float x1 = (-b + sqrt(delta)) / (2*a);
		float x2 = (-b - sqrt(delta)) / (2*a);
		printf("x1 = %.2f\n", x1);
		printf("x2 = %.2f\n", x2);
	}	
}
