#include <stdio.h>
int main(){
	int x=10;

	if(x>=5){
		printf("A");
	}else if(x>=10){
		printf("B");
	}else if(x>=15){
		printf("C");
	}else{
		printf("D");
	}
}

switch(x){
	case 5: printf("A"); break;
	case 10: printf("B"); break;
	case 15: printf("C"); break;
	default: printf("D");
}