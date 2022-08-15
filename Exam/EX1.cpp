#include <stdio.h>
#include <string.h>

int main(){
   	int x;
    printf ("Length of S1 is: \n");  
    do{                                             
   		scanf("%d", &x);
   		if (x <=0) { printf ("Please input x > 0 \n ");
	  } 
    }while(x <= 0);

    char s1[x];
    printf("Please input S1: \n");
    scanf("%s", s1);                                  
   
    int y;
    printf("Length of S2 is: \n"); 
    do{                                                            
      scanf("%d", &y);
      if(y <= 0){printf ("Please input y > 0 \n ");} 
    }while(y <= 0);

    char s2[y];
    printf("Please input S2: \n");
    scanf("%s",s2);                                 
   
    if(strlen(s1) > strlen(s2)){                                   
   	    char stemp[x];
   	    strcpy(stemp,s2);
   	    strcpy(s2,s1);
   	    strcpy(s1,stemp);
    }

    bool flag = false;
	int i = 0;

	while (s2[i] != 0){                     
		if (s2[i] == s1[0]){
			int j = 0;
			while(s1[j] != 0 && s2[i] != 0 && s1[j] == s2[i]){
				i++;
				j++;
			}
			if( s1[j] == 0) {
				flag = true;
				break;
			}
		}else{ 
			i++;}
	}

    if(flag){ 
 	   printf("YES");
    }else{ 
     	printf("NO");
    }
    return 0;	
}