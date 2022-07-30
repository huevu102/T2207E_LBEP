#include <stdio.h>
int main(){
	int a,b; //a,b > 0
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);

	for(int i=a; i>0; i--){
		if(a%i==0 && b%i==0){
			printf("Uoc chung lon nhat la: %d\n", i);
			for(int j=a; j<=a*b; j++){
				if(j%a==0 && j%b==0){
					printf("Boi chung nho nhat la: %d\n", j);
					break;
				}
			}
			break;
		}
	}
	
}