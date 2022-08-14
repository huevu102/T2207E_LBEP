int findDivisor(int a, int b){
	int max;
	if(a>b){
		max = b;
	}else{
		max = a;
	}

	for(int i=max; i>0; i--){
		if(a%i==0 && b%i==0){
			max = i;
			break;
		}
	}

	return max;
}