bool checkPrime(int n){
	if(n<=1){
		return false;
	}else{
		int flag = 0;
		for(int i=2; i<=n/2; i++){
			if(n%i==0){
				flag = 1;
				return false;
				break;
			}
		}

		if(flag==0){
			return true;
		}
	}	
}
