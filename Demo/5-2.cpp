#include <stdio.h>
int main(){
	for(int i=0; i<5; i++){
		for(int j=0; j<4; j++){
			printf("*\t");
	}
	if(i%2==0){
		printf("*");
	}	
	printf("\n");		
	}
}