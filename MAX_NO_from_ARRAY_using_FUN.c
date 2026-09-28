#include<stdio.h>
int main(){
    int arr[1],n,i;
    int max(int [],int);
    printf("how many elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("max:=%d",max(arr,n));
    return 0;
}
int max(int m[],int p){
    int maximum=0,i;
    for(i=0;i<p;i++){
        if(m[i]>maximum) maximum=m[i];
        
    }
    return maximum;
}