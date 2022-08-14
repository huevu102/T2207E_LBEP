#include <stdio.h>
#include "checknumber.h"

int main(){
	if(checkNumber(9)){
		printf("Is a prime number.\n");
	}else{
		printf("Not a prime number.\n");
	}
}