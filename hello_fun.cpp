

#include<stdio.h>

int hello(){
	printf("hello fun\n");
	
}
int add(){
	int a=80;
	int b=7;
	int c=a+b;
	printf("addition: %d\n",c);
}


int main(){
	add();
	hello();   // fun calling
	hello();         // fun calling
	add();       // fun calling
}

