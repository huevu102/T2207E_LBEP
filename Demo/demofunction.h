int findGreaterNumber(int a, int b){
	if(a>b){
		return a;
	}
	else if(b>a){
		return b;
	}
	else{
		printf("2 numbers are equal.\n");
		return 0;
	}
}

void menuRestaurant(){
	printf("1. Chicken noodle\n");
	printf("2. Beef noodle\n");
	printf("以上。\n");
}

bool checkPositive(int n){
	if(n>0){
		return true;
	}
	return false;

	// return n>0;
}