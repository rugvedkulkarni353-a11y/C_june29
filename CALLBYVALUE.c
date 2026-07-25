// cALL IT BY VALUE

#include<stdio.h>

int update(int n){
	
	printf("\n Before updation n=%d",n);  //10
	n=n+1;
	printf("\nAfter updation n=%d",n);  //11
	
}

int main(){
	int n=10;
	printf("Before function call n=%d",n);
	update(n);
	printf("\n After function call n=%d",n);
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
