#include<stdio.h>
int main(){
    int n,a=0,sum=0;
    printf("Enter the amount:");
    scanf("%d",&n);
    if(n<0){
        printf("Invalid amount!");
        return 0;
    }
    while(n!=0){
        printf("Enter the amount:");
        scanf("%d",&n);
        a++;
        sum=sum+n;
        if(n<0){
            printf("Invalid amount");
        return 0;
    }
    }
    printf("\nTotal withdraws:%d",a);
    printf("\nTotal amount of withdrawl:%d",sum);
}