// 3D Array
//#include<stdio.h>
//int main(){
//	int show[2][3][2]={{{11,11},{22,33},{44,33}},{{55,66},{33,67},{88,99}}};
//	
//	int d,c,r;
//	for (d=0;d<2;d++){
//		for(r=0;r<3;r++){
//			for(c=0;c<2;c++){
//				printf("%d ",show[d][c][r]);
//			}
//			printf("\n");
//		}
//		printf("\n");
//	}
//}

// [3][3][4]

#include<stdio.h>
int main(){
	int elements[3][3][4]={{{1,2,3,4},{5,6,7,8},{9,10,11,12}},{{13,14,15,16},{17,18,19,20},{21,22,23,24}},{{25,26,27,28},{29,30,31,32},{33,34,35,36}}};
	int a,m,d;
	
	for (a=0;a<3;a++){
		for(m=0;m<3;m++){
			for(d=0;d<4;d++){
				printf("%d ",elements[a][m][d]);
			}
			printf("\n");
		}
		printf("\n");
	}
}

// example 1
//#include<stdio.h>
//int main(){
//    int marks[2][2][2]={{{80, 85}, {70, 75}},{{90, 95}, {88, 92}}};
//	int i,j,k;
//	for(i=0;i<2;i++){
//        for(j=0;j<2;j++){
//            for(k=0;k<2;k++){
//                printf("%d ",marks[i][j][k]);
//            }
//            printf("\n");
//        }
//        printf("\n");
//    }
//	return 0;
//}

// example 2
//#include<stdio.h>
//int main(){
//    int a[2][2][2]={{{1,2},{3,4}},{{5,6},{7,8}}};
//	int i,j,k;
//	for(i=0;i<2;i++){
//        for(j=0;j<2;j++){
//            for(k=0;k<2;k++){
//                printf("%d ",a[i][j][k]);
//            }
//            printf("\n");
//        }
//        printf("\n");
//    }
//	return 0;
//}

// example 3
//#include<stdio.h>
//int main(){
//    int temp[2][2][2]={{{30,25},{31,26}},{{28,22},{29,23}}};
//	int i,j,k;
//	for(i=0;i<2;i++){
//        for(j=0;j<2;j++){
//            for(k=0;k<2;k++){
//                printf("%d ",temp[i][j][k]);
//            }
//            printf("\n");
//        }
//        printf("\n");
//    }
//	return 0;
//}

//Example 4
//#include<stdio.h>
//int main(){
//    int roll[2][2][3]={{{1,2,3},{4,5,6}},{{7,8,9},{10,11,12}}};
//	int i,j,k;
//	for(i=0;i<2;i++){
//        for(j=0;j<2;j++){
//            for(k=0;k<3;k++){
//                printf("%d ",roll[i][j][k]);
//            }
//            printf("\n");
//        }
//        printf("\n");
//    }
//	return 0;
//}

// example 5
//#include<stdio.h>
//int main(){
//    int a[3][3][2]={{{1,2},{3,4},{5,6}},{{7,8},{9,10},{11,12}},{{13,14},{15,16},{17,18}}};
//	int i,j,k;
//	for(i=0;i<3;i++){
//        for(j=0;j<3;j++){
//            for(k=0;k<2;k++){
//                printf("%d ",a[i][j][k]);
//            }
//            printf("\n");
//        }
//        printf("\n");
//    }
//	return 0;
//}
