#include <stdio.h>
#include <string.h>

int main (){
	int x, y;
	
	printf("Please input maximum characters of string S1, x = ");
	scanf("%d", &x);
	char s1[x];	
	printf("Please enter string S1: \n");
	scanf("%s", &s1);	
	
	printf("Please input maximum characters of string S2, y = ");
	scanf("%d", &y);
	char s2[y];
	printf("Please enter string S1: \n");
	scanf("%s", &s2);
	
	char *p;
	
	if( strlen(s1) > strlen(s2)){
		p = strstr(s1, s2);
	}else{
		p = strstr(s2, s1);
	}
	
	if(p==NULL){
		printf("NO");
	}else{
		printf("YES");
	}
}
