//1d array
/*#include<stdio.h>
int main(){
	int mark[5]={11,22,33,44,55};
	//mark[0]=11;
	//mark[1]=22;
	//mark[2]=33;
	//mark[3]=44;
	//mark[4]=55;
	
	//printf("%d",mark[3]);
	int i;
	
	for(i=0;i<5;i++){
		printf("%d\n",mark[i]);
	}
}*/

//example1
/*#include<stdio.h>
int main(){
   int value[5]={5,6,7,8,9};
   int multiply=1;
   int a;    
   for(a=0; a<5; a++){
       multiply *= value[a];
   }
    printf("multiplication of all elements in the array is: %d\n", multiply);

   return 0;
}*/

// example 2      
/*#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    int i;
	for(i = 0; i < 5; i++) {
        sum = sum + arr[i];
    }
	printf("Sum is %d", sum);
	return 0;
}*/

//example 3
/*#include <stdio.h>
int main() {
    int arr[5] = {15, 8, 30, 12, 20};
    int largest = arr[0];
    int i;
	for(i = 1; i < 5; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
	printf("Largest number is %d", largest);
	return 0;
}*/

//example 4
/*#include <stdio.h>
int main() {
    int arr[5] = {100, 200, 300, 400, 500};
    int sum = 0;
    int average;
    int i;
	for(i = 0; i < 5; i++) {
        sum = sum + arr[i];
    }
	average = sum / 5;
	printf("Average is %d", average);
	return 0;
}*/

// example5
#include <stdio.h>
int main() {
    int arr[5] = {2, 5908, 89, 11, 14};
    int i;
	printf("Odd numbers are: ");
	for(i = 0; i < 5; i++) {
        if(arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
	return 0;
}

//example 6

//#include <stdio.h>
//
//int main() {
//    int arr[5] = {5, -2, 8, -1, 10};
//    int count = 0;
//    int i;
//	for(i = 0; i < 5; i++) {
//        if(arr[i] > 0) {
//            count++;
//        }
//    }
//	printf("Positive numbers are %d", count);
//	return 0;
//}

// example 7
//#include <stdio.h>
//int main() {
//    int arr[5] = {5, -2, 8, -1, 10};
//    int count = 0;
//    int i;
//	for(i = 0; i < 5; i++) {
//        if(arr[i] > 0) {
//            count++;
//        }
//    }
//	printf("Positive numbers are %d", count);
//	return 0;
//}


