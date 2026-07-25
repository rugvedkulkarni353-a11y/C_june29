#include <stdio.h>

//simple calculator program
//made for practice - loop keeps running till user exits

int main()
{
	int ch;
	float a,b,res;

	while(1)
	{
		printf("\n=====MENU=====\n");
		printf("1.Add\n");
		printf("2.Sub\n");
		printf("3.Multiply\n");
		printf("4.Divide\n");
		printf("5.Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&ch);

		if(ch==5)
		{
			printf("thank you, exiting now...\n");
			break;
		}

		if(ch<1 || ch>5)
		{
			printf("wrong choice, enter again\n");
			continue;
		}

		printf("Enter first number : ");
		scanf("%f",&a);
		printf("Enter second number : ");
		scanf("%f",&b);

		//using switch case for operations
		switch(ch)
		{
			case 1:
				res=a+b;
				printf("Answer = %f\n",res);
				break;
			case 2:
				res=a-b;
				printf("Answer = %f\n",res);
				break;
			case 3:
				res=a*b;
				printf("Answer = %f\n",res);
				break;
			case 4:
				if(b==0)
				{
					printf("cannot divide by zero!\n");
				}
				else
				{
					res=a/b;
					printf("Answer = %f\n",res);
				}
				break;
		}

		//just to ask if user wants to do more
		int again;
		printf("\nDo you want to calculate again? (1 for yes / 0 for no) : ");
		scanf("%d",&again);
		if(again==0)
		{
			printf("ok bye bye\n");
			break;
		}
	}

	return 0;
}

