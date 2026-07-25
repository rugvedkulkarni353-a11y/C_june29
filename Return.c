// Return statement

#include<stdio.h>

int add(int a,int b){
	int c=a+b;              //local variable
	return c;
}

int main(){
	
	printf("%d",add(8,6));
	
	return 0;
}
