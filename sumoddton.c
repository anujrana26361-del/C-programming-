#include<stdio.h>
int main(){
int n,sum=0,sum2=0,sum3;
printf("enter a number=");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    if(i%2==0){
        
        sum = sum+i;
      
        
        
    }
    else{
        sum2 = sum2+i;
       
    }
}

 sum3 = sum+sum2;
 printf("even number=%d\n",sum);
 printf("odd number=%d\n",sum2);
 

  printf(" the add of even and odd numbers=%d\t",sum3);
  return 0;
  }
  

