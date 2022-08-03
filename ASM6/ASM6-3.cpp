#include <stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);

	int arr[n];
	printf("Nhap vao %d so:\n", n);
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	int x;
	printf("Nhap x = ");
	scanf("%d", &x);

	int flag = 0;	// bool t = false;

	for(int i=0; i<n; i++){
		if(arr[i]==x){
			printf("%d thuoc mang.", x);
			flag = 1;	// flag = true;
			break;
		}
	}

	if(flag==0){	// flag == false
		printf("%d khong thuoc mang.", x);
	}
}

//	if(flag){	// flag==true
//		printf("%d khong thuoc mang.", x);
//	}else{
//		printf("%d thuoc mang.", x);
//	}