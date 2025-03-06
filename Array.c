#include <stdio.h>

int main() {
    int marks[5],max=0,pos=0 ,sum=0;
    float avg;
    for(int i=0;i<5;i++)
    {
        printf("enter the marks of student %d:",i+1);
        scanf("%d",&marks[i]);
        sum+= marks[i];

        if(marks[i]>max)
        {
            max=marks[i];
            pos=i+1;
        }
    }
    avg=sum/5.0;
    printf("\n \n");
     printf("topper student is %d and marks%d\n",pos,max);
     printf("average marks of all student:%.2f\n",avg);
  
   
    return 0;
}