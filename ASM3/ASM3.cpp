#include <stdio.h>
int main(){
	// enter month & date
	int m;
	int d;
	printf("Hay nhap thang: ");
	scanf("%d", &m);
	printf("Hay nhap ngay: ");
	scanf("%d", &d);

	int STT;

	switch(m){
		case 1: STT = d; 
			printf("Ngay thu %d\n", STT);
			break;
		case 2: STT = d + 31;
			printf("Ngay thu %d\n", STT);
			break;
		case 3: STT = d + 28 + 31;
			printf("Ngay thu %d\n", STT);
			break;
		case 4: STT = d + 30 + 28 + 31;
			printf("Ngay thu %d\n", STT);
			break;
		case 5: STT = d + 31 + 30 + 28 + 31;
			printf("Ngay thu %d\n", STT);
			break;
		case 6: STT = d + 30 + 31 + 30 + 28 + 31;
			printf("Ngay thu %d\n", STT);
			break;
		case 7: STT = d + 31 + 30 + 31 + 30 + 28 + 31;
			printf("Ngay thu %d\n", STT);
			break;
		case 8: STT = d + 31 + 31 + 30 + 31 + 30 + 28 + 31;
			printf("Ngay thu %d\n", STT);
			break;
		case 9: STT = d + 30 + 31 + 31 + 30 + 31 + 30 + 28 + 31;
			printf("Ngay thu %d\n", STT);
			break;
		case 10: STT = d + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 28 + 31;
			printf("Ngay thu %d\n", STT);
			break;
		case 11: STT = d + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 28 + 31;
			printf("Ngay thu %d\n", STT);
			break;
		default: STT = d + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 28 + 31;
			printf("Ngay thu %d\n", STT);
			break;
	}

	int THU;
	 switch(STT%7){
	 	case 1: printf("La thu 2");
	 		break;
	 	case 2: printf("La thu 3");
	 		break;
	 	case 3: printf("La thu 4");
	 		break;
	 	case 4: printf("La thu 5");
	 		break;
	 	case 5: printf("La thu 6");
	 		break;
	 	case 6: printf("La thu 7");
	 		break;
	 	default: printf("La thu chu nhat");
	 		break;
	 }
}