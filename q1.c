#include <stdio.h>

int main(){
    int  arr[12],sum=0,avg=0,signals=0;
    for(int i=0;i<12;i++){
        printf("Enter the number of cars for %d signal: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<12;i++){
        sum=sum+arr[i];
        avg=sum/12;
    }
    int highest=arr[0],lowest=arr[0];
    for(int i=0;i<12;i++){
        
        if(arr[i]>avg){
            signals++;
        }
        if(arr[i]>highest){
            highest=arr[i];
        } if(arr[i]<lowest){
            lowest=arr[i];
        }
        
    }
    printf("\nOverloaded signals:%d",signals);
    printf("\n%d is the difference",highest-lowest);
    return 0;
}