#include<stdio.h>

    int pow1(int a,int b){
       int pow1=1;
       
        for(int i=1;i<=b;i++){
        
            pow1=pow1*a;
        }
        return pow1;
        
    }
    int main(){
            int x,y,power;
            printf("enter a base=");
            scanf("%d",&x);
            printf("enter a power=");
            scanf("%d",&y);
            power=pow1(x,y);
            printf("%d %d=%d",x,y,power);
            return 0;
    }
            