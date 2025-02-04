#include <stdio.h>

int main() {
    float a,b,c;
    printf("enter a value:",a);
    scanf("%f",&a);
    printf("enter a value:",b);
    scanf("%f",&b);
    printf("enter a value:",c);
    scanf("%f",&c);
    if (a>b)
    {
        if(a>c)
            printf(" a is greatest");
        else
            printf(" b is greatest");
    }
        else
        {
            if(c>b)
           printf(" c is greatest");
        else
            printf(" b is greatest");

        }
    }

