#include <stdio.h>
int main(){
	int a,b,c;
	do{
		printf("Nhap 3 canh cua tam giac:\n");
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);
	}while(!(a+b>c && b+c>a && c+a>b));
}