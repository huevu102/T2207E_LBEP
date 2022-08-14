//Nhập vào 5 chuỗi, tìm chuỗi lớn nhất

#include <stdio.h>
#include <string.h>

int main(){
	char arr[5][20];

	printf("Enter 5 strings:\n");
	for(int i=0; i<5; i++){
		scanf("%s\n", arr[i]);
	}

	char stringHigh[200];
	int max = 0;
	strcpy(stringHigh, "");

	for(int i=1; i<5; i++){
		if(strlen(arr[i]) > max){
			max = strlen(arr[i]);
		}
	}

	for(int i=0; i<5; i++){
		if(strlen(arr[i]) == max){
			strcat(stringHigh, arr[i]);
			strcat(stringHigh, ".");
		}
	}


	printf("The longest string is: %s\n", stringHigh);
}