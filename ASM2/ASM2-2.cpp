#include <stdio.h>
#include <math.h>
int main(){
	// input a,b,c
	int a,b,c;
	printf("Please enter a: \n");
	scanf("%d", &a);
	
	printf("Please enter b: \n");
	scanf("%d", &b);

	printf("Please enter c: \n");
	scanf("%d", &c);

	
	// a = 0
	if(a == 0){
		if(b == 0){
			if(c == 0){
				printf("Phuong trinh vo so nghiem.\n");
			}else{
				printf("No result for x.\n");
			}
		}else{
			float x = -(float)c/b;   // CAST c: int -> float / OR float x = -c/((float)b) OR float x = -((float)c)/((float)b)
			printf("x = %.2f\n", x);
		}
	}else{
		// delta
		int d = b*b - 4*a*c;
		
		// d < 0
		if(d < 0){
		printf("No result for x\n");
		}else{
			if(d == 0){
				float x = -(float)b/(2*a);
				printf("x = %.2f\n", x);
			}else{
				// delta > 0
				float x1 = (-b + sqrt(d)) / (2*a); // sqrt đã là số thực float rồi nên không cần cast
				float x2 = (-b - sqrt(d)) / (2*a);
				printf("x1 = %.2f\n", x1);
				printf("x2 = %.2f\n", x2);
			}
		}	
	}
	
}