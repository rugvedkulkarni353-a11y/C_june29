// 34,96,78 which is larger

#include<stdio.h>

int main(){
	int a=34;
	int b=96;
	int c=78;
	
	if(a>b && a>c){
		ptintf("%d (a) is largest",a);
	}
	
	else if(b>a && b>c){
		printf("96 is largest");
	}
	else{
		printf("78 is largest");
	}
}

