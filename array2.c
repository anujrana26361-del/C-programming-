#include<stdio.h>
int main(){
    int a[5];
    
    for (int i=0;i<5;i++){
    //    int a=i+1;
        printf("enter a numner=%d\n",i);
    scanf("%d",&a[i]);
    }
  // for(int i=0;i<=4;i++){
    //   printf("%d    ",a[i]);
//   }
   // { printf("%d ",a[i]);
   // }
   for(int i=4;i>=0;i--){
       printf("%d  ",a[i]);
   }
 
   
    return 0;
}