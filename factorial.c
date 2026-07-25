// core idea of factorial

#include<stdio.h>

int fact(int n);
int fact(int n){
	if (n>=1){
		return n+fact(n-2);
	
	}
	else{
		return 1;
		
	}
}


int main(){
	
	int n;
	printf("entre a num:");
	scanf("%d",&n);
	
	printf("the factrorial of %d=%d",n,fact(n));
}
