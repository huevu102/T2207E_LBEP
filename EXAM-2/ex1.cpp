#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c;
	printf("Please enter 3 edges of a triangle:\n");
	scanf("%f %f %f", &a, &b, &c);

	if(a+b>c && b+c>a && c+a>b){
		float p = (a+b+c)/2;
		float s = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("The area of the triangle is %f\n", s);
	}else{
		printf("Entered numbers are not 3 edges of a triangle.\n");
	}	
}