#include<stdio.h>
int main(){
    int n , a =0 , i;
    printf("enter the number :");
    scanf("%d",&n);
    for( i =1 ; i<=n ; i++){
   printf("%d " , i);
   
   a = a+i;
  
    }
    
    
    printf("sum of the numbers of n : %d",a);
    return 0;
}