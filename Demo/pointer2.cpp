#include <stdio.h>
#include <stdlib.h>

int main(){
	int *p;

	p = (int *)malloc(10*sizeof(int)); // = int p[10];
	// = p = (int *)calloc(10, sizeof(int));
	// malloc: không dọn ô nhớ trước khi cấp phát mà giữ nguyên giá trị cũ của ô nhớ và cấp
	// calloc: clear ô nhớ về giá trị 0 sau đó mới cấp phát
	// calloc sẽ chậm hơn malloc

	for(int i=0; i<10; i++){
		scanf("%d", &p[i]);
	}

	p = (int *)realloc(p,20*sizeof(int)); // them 20 o

	for(int i=0; i<20; i++){
		scanf("%d", &p[i]);
	}

	free(p); // trả ô nhớ còn trống để nhẹ cho ram
	// = p = (int *)realloc(p,0*sizeof(int));
}