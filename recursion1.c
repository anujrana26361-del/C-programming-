#include<stdio.h>
int series(int x){
    if(x==0)
    return 0;
    series(x-1);
    printf("%d \n",x);
}
int main(){
    int n;
    printf("enter a number=");
    scanf("%d",&n);
    series(n);
    return 0;
}