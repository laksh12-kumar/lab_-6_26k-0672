#include<stdio.h>
int main(){
    int seat[15]={1,0,1,0,0,1,1,1,0,1,0,0,0,1,1};
    int empty=0,booked=0,first,last;
    for(int i=0;i<15;i++){
        if(seat[i]==1){
            booked++;
        }
        else{
            empty++;
        }
    }
    for(int i=0;i<14;i++){
        if(seat[i]==0){
            first=i;
            break;
        }
    }
    for(int i=14;i>0;i--){
        if(seat[i]==0){
            last=i;
            break;
        }
    }
    for(int i=0;i<3;i++){
        if(seat[i]==0){
            seat[i]=1;
        }
    }
    printf("\nTotal booked:%d",booked);
    printf("\nTotal empty:%d",empty);
    printf("\nFirst available seat:%d",first);
    printf("\nLast available seat:%d",last);
    printf("\nFinal Seating Chart\n");
    for(int i=0;i<15;i++){
        printf("%d ",seat[i]);
    }
}