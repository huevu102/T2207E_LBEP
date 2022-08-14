#include <stdio.h>
#include <iostream>

int main(){
	int x=10;
	int *p;
	p = &x;

	printf("x = %d\n", x);
	printf("Dia chi của x: ");
	std::cout<< &x;
	printf("\nGia tri của p: ");
	std::cout<< p;

	x++;
	printf("\nx = %d", x); //11
	(*p)++;
	printf("\nx = %d", x); //12
}