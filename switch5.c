#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, d ,t1,t2;

    
    printf("Enter x1: ");
    scanf("%f", &x1);
    printf("Enter y1: ");
    scanf("%f", &y1);
    printf("Enter x2: ");
    scanf("%f", &x2);
    printf("Enter y2: ");
    scanf("%f", &y2);

    t1=pow((x2-x1),2);
    t2=pow((y2-y1),2);
    d=sqrt(t1+t2);
    
    printf("Distance:%f",d);
    
    return 0;
}