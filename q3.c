#include<stdio.h>
int main(){
    int stock[10],minimum[10],msum=0,total=0;
    for(int i=0;i<10;i++){
        printf("\nEnter the stock for product %d: ",i+1);
        scanf("%d",&stock[i]);
        printf("\nEnter the minimum stock for product %d: ",i+1);
        scanf("%d",&minimum[i]);
        msum=msum+(minimum[i]-stock[i]);
        if(stock[i]<minimum[i]){
            printf("\nThis product needs %d units reordered",minimum[i]-stock[i]);
        }
        else{
            printf("\nThis product is fine.");
        }
    }
        total=total+msum;
        printf("\nTotal reordered product are:%d",total);
    return 0;
}