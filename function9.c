#include<stdio.h>
int swap(int *x,int *y){
    *x=*x+*y;
     *y=*x-*y;
   *x=*x-*y;
  
   
  
}
   
int main(){
    int a,b,swap1;
    printf("enter a numbet=");
    scanf("%d",&a);
    printf("enter a number=");
    scanf("%d",&b);
    printf("%d \n %d",a,b);
   swap(&a,&b);
  
   
   
    return 0;
}