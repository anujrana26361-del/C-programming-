#include<stdio.h>
int product(int *x){
    return *x*5;
}

int main(){
    int a=10;
    int *p=&a;
    *p=30;
    int z;
   z=product(&a);
    printf("%d \n",a);
    printf("%d",z);
    
    return 0;
}