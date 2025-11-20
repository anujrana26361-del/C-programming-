#include<stdio.h>
int sum(int *a,int *b){
    return *a+*b;
}
int main(){
    int x,y;
    printf("enter a x =\n enter a y=");
    scanf("%d %d",&x,&y);
   int *p1=&x;
   int *p2=&y;
   int result=sum(p1,p2);
   printf("%d",result);
    return 0;
}