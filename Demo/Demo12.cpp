#include <stdio.h>

bool checkTriangle(int a, int b, int c){
	return a+b>c && b+c>a && a+c>b;
}

int main(){
	if(checkTriangle(10, 15, 5)){
		printf("Are the three sides of a triangle.\n");
	}else{
		printf("Not the three sides of a triangle.\n");
	}
}