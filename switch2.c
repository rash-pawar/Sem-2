#include <stdio.h>
#include<string.h>

int main(){
    char password[20]="admin@123"
    ,entered_password[20];
    int i,f=0;
    printf("enter the password");
    scanf("%s",&entered_password);
    for(i=0;i<9;i++)
    {
        if(entered_password[i]==password[i])

        {
            f++;
        }
    }
        if(f==9)
        {
            printf("correct password!");
        }
        else{
            printf("wrong password!");
        }
    
    return 0;
}