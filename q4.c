#include<stdio.h>
int main(){
    int marks[15],student=0,avg=0,sum=0;
    for(int i=0;i<15;i++){
        printf("\nEnter the marks for %d student: ",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<15;i++){
        marks[i]=marks[i]+5;
        if(marks[i]>100){
            marks[i]=100;
        }
        if(marks[i]==100){
            student++;
        }
        sum=sum+marks[i];
        avg=(sum)/15;
    }
    int highest=marks[0],lowest=marks[0];
    for(int i=1;i<15;i++){
        if(marks[i]>highest){
            highest=marks[i];
        }
        if(marks[i]<lowest){
            lowest=marks[i];
        }
    }
    printf("\nStudent who got 100:%d",student);
    printf("\nRange:%d",highest-lowest);
    printf("\nAverage:%d",avg);

    return 0;
}