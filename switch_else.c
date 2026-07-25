//   switch case
// alternative statement to else if
//  here is a only one block but multipal case

#include<stdio.h>

int main(){
	int time;
	
	printf("Entre the time");
	scanf("%d",&time);
	 
	 switch(time){
	 	
	 	case 6: 
	 	    printf("Good Morning");
	 	break;
	 	
	 	case 12:
	 		printf("Good Afternoon ");
	 	break;
		 
		case 16:
		    printf("Good Evening");
		break;
		
		case 21:
		    printf("Good Night");
		break;
		
		default:
		    printf("input is invalid");	
			
	 	
	 	
	 }
	 
}
