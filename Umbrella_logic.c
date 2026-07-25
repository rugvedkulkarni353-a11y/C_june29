// if else statement
// Umbrella logic

#include<stdio.h>

int main(){
	char raining;
	printf("Is it raining?(y/n):");
	scanf("%c",&raining);
	
	  if(raining=='y'){
	  	printf("Take an Umbrella");
	  }
	else{
		printf("Weather is clear!!, Enjoy your day.");
		
	}
	return 0;
}
	
