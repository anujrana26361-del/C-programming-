#include<stdio.h>
int main(){
    float n;
    printf("enter the value of n :");
    scanf("%f",&n);
    float a = 100;
    for(int i =1 ; i<=n ; i++)
    {
        printf("%f \n ",a);
        a = a*1/2;
    }
    return 0;
}