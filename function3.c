#include<stdio.h>
#include<math.h>
int pow1(int a,int b){
    int result= pow(a,b);
    return result;
}
int main(){
    int x,y,power;
    printf("emter a base=\n");
    scanf("%d",&x);
    printf("emter a power=\n");
    scanf("%d",&y);
    power=pow1(x,y);
    printf("%d",power);
    return 0;
}