#include<stdio.h>
int sum(int *a){
    
    return *a* *a;
}
int main(){
    int n;
    printf("enter a number=");
    scanf("%d",&n);
    n=sum(&n);
   printf("%d",n);
    
    return 0;
}