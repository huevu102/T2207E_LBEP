#include <stdio.h>
#include <math.h>
int main(){
	// enter a,b,c
	int a,b,c;
	printf("Please enter a,b,c:\n");
	scanf("%d%d%d", &a, &b, &c);
	
	// is triangle
	if(a+b>c && b+c>a && c+a>b){
		// yes
		int P = a+b+c;
		float p = P/2;
		float S = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("Circumference P = %d\n", P);
		printf("Area S = %.2f\n", S);
	}else{
		// no
		printf("Not a triangle.\n");
	}
}
