#include <stdio.h>
int main(){
	int n;
	printf("Enter n = ");
	scanf("%d", &n);
	
	int arr[n];
	printf("Please enter %d integer(s):\n", n);
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	int count = 0;
	int max = 0;
	for(int i=0; i<n; i++){
		if(arr[i]>0){
			count = count + 1;
			if(max<count){
				max = count;
			}
		}else{
			count = 0;
			continue;
		}
	}
	
	printf("Mang co nhieu nhat %d so duong lien tiep.", max);
}
