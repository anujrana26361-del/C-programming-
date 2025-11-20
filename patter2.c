#include<stdio.h>
int main(){
    int i,j;
    for(int i=1;i<=5;i++){
        for(int j=i;j<=5;j++){
            printf(" ");
        }
          for(int k=1;k<=i;k++){
              printf("*");
        
        }
        printf("\n");
       
    }
   

for(int x=1;x<=5;x++){
    for(int y=1;y<=x;y++){
        printf("*");
    }
    printf("\n");
}
for(int a=1;a<=5;a++){
    for(int b=a;b<=5;b++){
        printf("*");
    }
    printf("\n");
}
    return 0;
}