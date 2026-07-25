//     call it by refrence/adress

#include<stdio.h>

int update(int *n){
	printf("\nbefore update n=%d",*n);
	
	*n=*n+1;
	printf("\n After update n=%d",*n);
	
}



int main(){
	int n=10;
	printf("before functioncall n=%d",n);
	
	update(&n);
	printf("\n After function call n=%d",n);
}
