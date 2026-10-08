#include<stdio.h>
int main(){
    int notes500[5] = {10, 5, 8, 12, 6},notes200[5] = {20, 15, 10, 8, 14},notes100[5] = {30, 25, 40, 35, 20};
    int amount,Totalmoney=0,a=0,b=0,c=0;
    for(int i=0;i<5;i++){
        a=notes100[i]*100;
        b=notes200[i]*200;
        c=notes500[i]*500;
        Totalmoney=Totalmoney+a+b+c;
    }
    printf("Enter a amount for withdrawl:");
    scanf("%d",&amount);
    if(amount>Totalmoney){
        printf("Insufficient Funds!");
        return 0;
    }
    if(amount%100!=0){
        printf("Invalid amount!");
        return 0;
    }
    else{
        printf("Transation Approved!");
    } 
}