#include <stdio.h>
#include <string.h>

// Với string thì function không cần truyền vào kích thước của mảng, không cần return
void uppercase(char str[]){
	for(int i=0; i<strlen(str); i++){
		if(str[i]>=97 && str[i]<=122){
			str[i]-=32;   //!!!!!!!!!
		}
	}
}

// Với mảng số thì function cần truyền vào cả kích thước của mảng
int maxOfArray(int arr[], int n){
	int high = arr[0];
	for(int i=0; i<n; i++){
		if(arr[i]>high){
			high = arr[i];
		}
	}

	return high;
}


int main(){
	char s[20];

	printf("Enter S = ");
	scanf("%s", s);

	uppercase(s);

	printf("%s\n", s);
}