#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n,r,nfact,rfact,nrfact,ncr;
    printf("enter a n=");
    scanf("%d",&n);
    printf("enter a r=");
    scanf("%d",&r);
    nfact=factorial(n);
    rfact=factorial(r);
    nrfact=factorial(n-r);
    ncr=nfact/(rfact*(nrfact));
    printf("%d",ncr);
    
    
    
    return 0;
}