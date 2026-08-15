//3D Array
//#include<stdio.h>
//int main(){
//   int show[2][3][2] = {{{1,2},{3,4},{5,6}},{{7,8},{9,10},{11,12}}};

//    for(int a=0; a<2; a++){                     //0<2 true 
//        for(int b=0; b<3; b++){                 //0<3 true
//            for(int c=0; c<2; c++){             
//                printf("%d ", show[a][b][c]);  //1 2 
//            }
//            printf("\n");
//        }
//        printf("\n");
//    }
//    return 0;
//}

#include<stdio.h>
int main(){
    int show[3][3][4] = {{{1,2,3,4},{5,6,7,8},{9,10,11,12}},{{13,14,15,16},{17,18,19,20},{21,22,23,24}},{{25,26,27,28},{29,30,31,32},{33,34,35,36}}};

    for(int a=0; a<3; a++){                     //0<3 true 
        for(int b=0; b<3; b++){                 //0<3 true
            for(int c=0; c<4; c++){             
                printf("%d ", show[a][b][c]);  //1 2 3 4 5 
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

//3D Array 5 Programs as hw
// example 1
//#include<stdio.h>
//int main(){
//    int point[2][2][2] = {{{1,2},{3,4}},{{5,6},{7,8}}};
//
//    int x,y,z;
//	for(x=0;x<2;x++)
//    {
//        for(y=0;y<2;y++)
//        {
//            for(z=0;z<2;z++)
//            {
//                printf("%d ",point[x][y][z]);
//            }
//            printf("\n");
//        }
//        printf("\n");
//    }
//}

//EXAMPLE 2
//#include<stdio.h>
//int data[2][3][2] = {{{1,85},{2,90},{3,88}},{{4,92},{5,80},{6,95}}};
//int main(){
//    int a,b,c;
//	for(a=0;a<2;a++){
//        for(b=0;b<3;b++){
//            for(c=0;c<2;c++){
//                printf("%d ",data[a][b][c]);
//            }
//            printf("\n");
//        }
//        printf("\n");
//    }
//}

//Example 3
//#include<stdio.h>
//int main(){
//    int player[2][2][2] ={{{7,2},{10,3}},{{11,1},{9,4}}};
//	int i,j,k;
//	for(i=0;i<2;i++){
//        for(j=0;j<2;j++){
//            for(k=0;k<2;k++){
//                printf("%d ",player[i][j][k]);
//            }
//            printf("\n");
//        }
//        printf("\n");
//    }
//}

//Example 4
//#include<stdio.h>
//int main(){
//    int item[2][2][2] = {{{101,50},{102,75}},{{103,90},{104,120}}};
//	int p,q,r;
//	for(p=0;p<2;p++){
//        for(q=0;q<2;q++){
//            for(r=0;r<2;r++){
//                printf("%d ",item[p][q][r]);
//            }
//            printf("\n");
//        }
//        printf("\n");
//    }
//}

//Example V
//#include<stdio.h>
//int main(){
//    int score[2][3][2] = {{{50,2},{60,1},{70,3}},{{80,0},{45,2},{90,4}}};
//	int row,col,val;
//	for(row=0;row<2;row++){
//        for(col=0;col<3;col++){
//            for(val=0;val<2;val++){
//                printf("%d ",score[row][col][val]);
//            }
//            printf("\n");
//        }
//        printf("\n");
//    }
//}

