// parameterized fun


#include<stdio.h>

//  int c;      // globle variable

int add(int a,int b){     // int a, int b areparameters    // Local
	int c=a+b;
	printf("\n%d",c);
}

int main(){ 
    printf("parameterized fun\n");
	 
	add(88,7); 
		
}
