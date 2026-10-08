#include<stdio.h>
int main(){
    int n,a=0,c=0,b;
    printf("Enter the number:");
    scanf("%d",&n);
    a=n;
    while(a>0){
        b=a%10;
        a=a/10;
        c=c*10+b;
    }
    if(c==n){
        printf("Palindrome Confirmed!");
    }
    else{
        printf("Not a Palindrome");
    }
}