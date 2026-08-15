//1D Array
//#include<stdio.h>

//int main(){
//    int mark[5] = {1, 2, 3, 4, 5};
//   int i;

//    for(i = 0; i < 5; i++){
//        printf("mark[%d] = %d\n", i, mark[i]);
//    }
//
//    return 0;
//}

//Example 1
//#include<stdio.h>
//int main(){
//    int mark[4] = {1, 2, 3, 4};
//    int n; 

//    for(n=0;n<4;n++){
//        printf("mark[%d] = %d\n", n , mark[n]);
//    }
//    return 0;
//}

//Example 2
//#include<stdio.h>
//int main(){
//    int mark[5]={5,6,7,8,9};
//    int add=0;

//    for(int i=0; i<5; i++){
//        add += mark[i];
//    }
//    printf("Sum of all elements in the array is: %d\n", add);

//    return 0;
//}


//Example 3
//#include<stdio.h>

//int main() {
//    int arr[5] = {25, 12, 48, 19, 31};
//    int largest = arr[0];

//    for(int i = 0; i < 5; i++) {
//        if(arr[i] > largest) {
//            largest = arr[i];
//       }
  //  }

 //   printf("Largest number is = %d", largest);

//    return 0;
//}


//Example 4
//#include<stdio.h>

//int main() {
//    int arr[5] = {25, 12, 48, 19, 31};
//    int smallest = arr[0];

//    for(int i = 1; i < 5; i++) {
//        if(arr[i] < smallest) {
//            smallest = arr[i];
//        }
//    }

//    printf("Smallest number is = %d", smallest);

//    return 0;
//}

//Example 5
//#include<stdio.h>

//int main() {
//    int arr[5] = {10, 20, 30, 40, 50};
//
  //  printf("Reversed Array:\n");

//    for(int i = 4; i >= 0; i--) {
//        printf("%d ", arr[i]);
//    }

//    return 0;
//}

//Example 6
//#include<stdio.h>

//int main() {
//    int arr[5];

//    printf("Enter 5 numbers:\n");

 //   for(int i = 0; i < 5; i++) {
  //      scanf("%d", &arr[i]);
 //   }

//    printf("Elements in the array are:\n");

//    for(int i = 0; i < 5; i++) {
//        printf("%d ", arr[i]);
//    }

//    return 0;
//}


//Example 7
#include<stdio.h>

int main() {
    int arr[6] = {12, 7, 9, 14, 20, 5};
    int even = 0, odd = 0;

    for(int i = 0; i < 6; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
   }

    printf("Even = %d\n", even);
    printf("Odd = %d", odd);

    return 0;
}