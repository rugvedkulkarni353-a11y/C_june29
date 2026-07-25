// change no. by call by value
/*#include<stdio.h>
int change(int x){
    x = 20;
    return 0;
}
int main(){
    int a = 10;
    change(a);
    printf("a = %d", a);
    return 0;
}    */

// add two no. by call by value
/*#include<stdio.h>
int add(int a, int b){
    printf("Sum = %d", a + b);
    return 0;
}
int main(){
    int x = 10, y = 20;
    add(x, y);
    return 0;
}*/

//multiply by 2 by call by value
/*#include<stdio.h>
int multiply(int x){
    x = x * 2;
    printf("Inside function = %d\n", x);
    return 0;
}
int main(){
    int a = 5;
	multiply(a);
    printf("Outside function = %d", a);
    return 0;
} */
 
  //finding a square by call by value
 /*#include<stdio.h>
int square(int x){
    x = x * x;
    printf("Square = %d", x);
    return 0;
}
int main(){
    int a = 4;
    square(a);
    return 0;
}*/ 

//swapping numbers by call by value
/*#include<stdio.h>
int swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside function: %d %d", a, b);
    return 0;
}
int main(){
    int x = 10, y = 20;
    swap(x, y);
    printf("\nOutside function: %d %d", x, y);
    return 0;
}*/

//changing no. by call by refrance
/*#include<stdio.h>
int change(int *x){
    *x = 20;
    return 0;
}
int main(){
    int a = 10;
    change(&a);
    printf("a = %d", a);
    return 0;
}
*/

// swaping two numbers call by refrance
/*#include<stdio.h>
int swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}
int main(){
    int x = 10, y = 20;
    swap(&x, &y);
	printf("%d %d", x, y);
	return 0;
}*/

// increasing no by 5 call by refrence
/*#include<stdio.h>
int increase(int *x){
    *x = *x + 5;
	return 0;
}
int main(){
    int a = 10;
	increase(&a);
	printf("%d", a);
	return 0;
}*/

// multiplying 2 call by refrence
/*#include<stdio.h>
int doubleValue(int *x){
    *x = *x * 2;
	return 0;
}
int main(){
    int a = 15;
	doubleValue(&a);
	printf("%d", a);
	return 0;
}*/

// set no. to 0 call by refrence
/*#include<stdio.h>
int reset(int *x){
    *x = 0;
	return 0;
}
int main(){
    int a = 25;
	reset(&a);
	printf("%d", a);
	return 0;
}*/


