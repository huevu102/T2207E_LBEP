int calculateTotal(int n){
	int total = 0;
	int i;
	while(n>0){
		i = n%10;
		total = total + i;
		n = n/10;
	}

	return total;
}