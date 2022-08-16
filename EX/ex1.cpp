#include <stdio.h>
#include <string.h>

int main (){
	int x, y;
	
	printf("Please input x = ");
	scanf("%d", &x);
	char s1[x];	
	printf("Please enter string S1: \n");
	scanf("%s", &s1);	
	
	printf("Please input y = ");
	scanf("%d", &y);
	char s2[y];
	printf("Please enter string S1: \n");
	scanf("%s", &s2);
	
	int s = strlen(s1);
	int l = strlen(s2);
	
	printf("%d\t%d\t", s, l);
	
	if(s>l){
		char temp[x];
		strcpy(temp, s1);
		strcpy(s1, s2);
		strcpy(s2, temp);
	}
	
	char *p;
	p = strstr(s2, s1);
	
	if(p==NULL){
		printf("NO");
	}else{
		printf("YES");
	}
}
