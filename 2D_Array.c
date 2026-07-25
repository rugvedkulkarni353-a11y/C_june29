//2D Array
//#include<stdio.h>
//int main(){
//    int num[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
//    int i, j;
//
//    for(i = 0; i < 3; i++){                      //i=0 0<3 true 3<3 false
//        for(j = 0; j < 4; j++){                  //j=0 0<4 true 4<4 false
//            printf("%d",num[i][j]);                 // 1 2 3 4
//                                                   // 5 6 7 8
//        }                                           // 9 10 11 12
//        printf("\n");
//    }
//
//    return 0;
//}

// example 1
//#include<stdio.h>
//int main() {
//    int num[2][2] = {{1,2},{3,4}};
//    int m, n, sum = 0;
//	for(m=0; m<2; m++) {
//        for(n=0; n<2; n++) {
//            sum = sum + num[m][n];
//        }
//    }
//	printf("Sum is %d", sum);
//	return 0;
//}
 
  // example 2
//#include<stdio.h>
//int main() {
//    int num[2][3] = {{1,2,3},{4,5,6}};
//    int m, n, count = 0;
//	for(m=0; m<2; m++) {
//        for(n=0; n<3; n++) {
//            if(num[m][n] % 2 == 0) {
//                count++;
//            }
//        }
//    }
//	printf("Even numbers are %d", count);
//	return 0;
//}  

//example 3
//#include<stdio.h>
//int main() {
//    int num[2][2] = {{1,2},{3,4}};
//    int m, n, multiply = 1;
//	for(m=0; m<2; m++) {
//        for(n=0; n<2; n++) {
//            multiply = multiply * num[m][n];
//        }
//    }
//	printf("Multiplication is %d", multiply);
//	return 0;
//}

// example 4
//#include<stdio.h>
//int main() {
//    int num[2][3] = {{1,2,3},{4,5,6}};
//    int m, n, count = 0;
//	for(m=0; m<2; m++) {
//        for(n=0; n<3; n++) {
//            if(num[m][n] % 2 != 0) {
//                count++;
//            }
//        }
//    }
//	printf("Odd numbers are %d", count);
//	return 0;
//}

//example 5
//#include<stdio.h>
//int main() {
//    int num[2][3] = {{10,25,8},{30,12,20}};
//    int m, n, largest;
//	largest = num[0][0];
//	for(m=0; m<2; m++) {
//        for(n=0; n<3; n++) {
//            if(num[m][n] > largest) {
//                largest = num[m][n];
//            }
//        }
//    }
//	printf("Largest number is %d", largest);
//	return 0;
//}

//example 6
//#include<stdio.h>
//int main() {
//    int num[2][3] = {{5,-2,8},{-1,10,-3}};
//    int m, n;
//	printf("Positive numbers are:\n");
//	for(m=0; m<2; m++) {
//        for(n=0; n<3; n++) {
//            if(num[m][n] > 0) {
//                printf("%d ", num[m][n]);
//            }
//        }
//    }
//	return 0;
//}

// example 7
#include<stdio.h>
int main() {
    int num[2][3] = {{55,-29,48},{-19,99,-99}};
    int m, n;
	printf("Positive numbers are:\n");
	for(m=0; m<2; m++) {
        for(n=0; n<3; n++) {
            if(num[m][n] > 0) {
                printf("%d ", num[m][n]);
            }
        }
    }
	return 0;
}
  
  
  
