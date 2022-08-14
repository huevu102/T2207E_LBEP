int findMultiple(int a, int b){
	int min;
	if(a>b){
		min = b;
	}else{
		min = a;
	}

	for(int i=min; i<=a*b; i++){
		if(i%a==0 && i%b==0){
			min = i;
			break;
		}
	}

	return min;
}