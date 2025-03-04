#include <stdio.h>
int main(){
   unsigned long long  int n,i,fact=1;
    
    printf(" enter a number:");
    scanf("%llu",&n);
    if(n<0){
        printf("factorial of negative number is not possible.\n");
    }
    else{
         for(i=1;i<=n;i++){
         fact=fact*i;
         }
    printf("factorial of %llu is %llu\n",n,fact);
}
   
    return 0;
}