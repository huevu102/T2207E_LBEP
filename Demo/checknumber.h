bool checkNumber(int n){
	if(n>0){
		for(int i=2; i<=n/2; i++){
			if(n%i==0){
				return false;
			}
		}
		return true;
	}else{
		return false;
	}
}