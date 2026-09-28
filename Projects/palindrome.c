#include<stdio.h>
int main() {
    int ispalindrome(int);
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (ispalindrome(n)== 1){
        printf("%d is a palindrome number.\n", n);
    }
        else{
        printf("%d is not a palindrome number.\n", n);
    }
    return 0;
}
int ispalindrome (int m){
    int rev=0,temp;
    temp=m;
    while(m>0){
        rev=rev*10+m%10;
        m=m/10;
    }
    if (rev == temp)
        return 1;
    else
        return 0;
}    
        