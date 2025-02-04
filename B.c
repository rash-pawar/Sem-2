#include<stdio.h>
main()
{
    float a,b,c,y,x,z;
    a=9;
    b=12;
    c=3;
    x=a-b/3+c*2-1;
    y=a-b/(3+c)*(2-1);
    z=a-(b/(3+c)*2)-1;
    printf("x=%0.1f\n",x);
    printf("y=%0.2f\n",y);
    printf("z=%f\n",z);
}

