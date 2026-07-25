// if statement 
// check battery 

#include<stdio.h>
int main(){
     
     int battery;
     printf("Entre battery percentage");
     scanf("%d",&battery);
     
     if(battery<20){
     	printf(" LOW BATTERY!!, Pls charge ur phone ");
     	
	 }
	 else{
	 	printf("%d",battery);
	 }
     return 0;
}
