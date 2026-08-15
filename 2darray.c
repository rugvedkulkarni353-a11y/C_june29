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


//Example 1
// #include<stdio.h>

// int main() {
//     int arr[2][3] = {{10, 20, 30},{40, 50, 60}};

//     for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 3; j++) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

//Example 2
// #include<stdio.h>

// int main() {
//     int arr[2][3];

//     printf("Enter 6 elements:\n");

//     for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 3; j++) {
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     printf("The Array is:\n");

//     for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 3; j++) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

//Example 3
//  #include<stdio.h>

//  int main() {
//     int arr[2][3] = {
//         {1, 2, 3},
//         {4, 5, 6}
//     };

//     int sum = 0;

//     for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 3; j++) {
//             sum += arr[i][j];
//         }
//     }

//     printf("Sum = %d", sum);

//     return 0;
// }

//Example 4
// #include<stdio.h>

// int main() {
//     int arr[2][3] = {
//         {10, 45, 18},
//         {25, 60, 12}
//     };

//     int largest = arr[0][0];

//     for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 3; j++) {
//             if(arr[i][j] > largest)
//                 largest = arr[i][j];
//         }
//     }

//     printf("Largest = %d", largest);

//     return 0;
// }

//Example 5
// #include<stdio.h>

// int main() {
//     int a[2][2] = {
//         {1, 2},
//         {3, 4}
//     };

//     int b[2][2] = {
//         {5, 6},
//         {7, 8}
//     };

//     int c[2][2];

//     for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 2; j++) {
//             c[i][j] = a[i][j] + b[i][j];
//         }
//     }

//     printf("Sum Matrix:\n");

//     for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 2; j++) {
//             printf("%d ", c[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

//Example 6
// #include<stdio.h>

// int main() {
//     int arr[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     for(int i = 0; i < 3; i++) {
//         int sum = 0;

//         for(int j = 0; j < 3; j++) {
//             sum += arr[i][j];
//         }

//         printf("Sum of Row %d = %d\n", i + 1, sum);
//     }

//     return 0;
// }

//Example 7
#include<stdio.h>

int main() {
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("Original Matrix:\n");

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose Matrix:\n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}