#include<stdio.h>
int main(){
    int a,b;
    printf("enter a number=");
    scanf("%d",&a);
    printf("emter a numner=");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d\n%d",a,b);
    return 0;
}