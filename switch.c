#include <stdio.h>

int main(){
    int choice,a,b;
    printf("enter 1-add, 2-sub, 3-mul, 4-div:");
    scanf("%d",&choice);
    printf("enter num1 and num2:");
    scanf("%d,%d" ,&a,&b);
    switch(choice)
    {
        case 1:
        printf("perform addition %d",(a+b));
        break;
        case 2:
        printf("perform substraction%d",(a-b));   
        break;
        case 3:
        printf("perform multiplication%d",(a*b));   
        break;
        case 4:
        if(b==0)
        {
            printf("infinite");
        }
        else{
        printf("perform division:%d",(a/b));
        }
        break;
        default:
        printf("wrong");
    }

    return 0;
}


// #include<stdio.h>

// int main(){
    
// }