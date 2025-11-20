#include<stdio.h>
#include<math.h>
int sq(int a){
    int sq1=sqrt(a);
    return sq1;
}
int main(){
    int sq2,x;
    printf("enter a number=");
    scanf("%d",&x);
    sq2=sq(x);
    printf("%d",sq2);
    return 0;
}