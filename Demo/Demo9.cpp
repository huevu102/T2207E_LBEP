#include <stdio.h>
int main(){
	int i,j,temp;
	int data[5]={23, 90, 9, 25,16};

	for(j=1; j<5; j++){
		i = j-1;
		temp = data[j];
		while((i >= 0) && (temp < data[i])){
			data[i+1] = data[i];
			i--;
		}

		data[i+1] = temp;
	}

	for(int i=0; i<5; i++){
		printf("%d ", data[i]);
	}
}