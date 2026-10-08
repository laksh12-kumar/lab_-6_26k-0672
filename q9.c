#include<stdio.h>
int main(){
    int transfers[10] = {5000, 50, 12000, 500000, 20, 8000, 25000, 300, 450000, 15000};
    int amount,a=0,b=0,sum=0,c=0;
    float avg=0;
    for(int i=0;i<10;i++){
        if(transfers[i]<100){
        a++;
        }else if(transfers[i]>200000){
            b++;
        }else{
            sum=sum+transfers[i];
            c++;
        }
    }
    avg=sum/c;
    int largest=transfers[0];
    for(int i=0;i<10;i++){
        if(transfers[i]>largest){
            largest=transfers[i];
        }
    }
    printf("\nThere are %d number of test transations.",a);
    printf("\nThere are %d number of suspicious transations.",b);
    printf("\nAverage:%.2f",avg);
    printf("\nLargest amount:%d",largest);
}