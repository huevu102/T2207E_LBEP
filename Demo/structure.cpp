#include <stdio.h>

typedef struct SV{
	char TenSV[50];
	char MaSV[20];
	int DiemThi;
}SINHVIEN; // struct SV = SINHVIEN nhờ typedef

int main(){
	struct SV nam; // = SINHVIEN nam;
	nam.DiemThi = 10;
	printf("Nhap ten sinh vien:");
	scanf("%s", nam.TenSV);


	struct SV t2207e[27];
	for(int i=0; i<27; i++){
		scanf("%s\n", t2207e[i].TenSV);
	}

	SINHVIEN minh;
}