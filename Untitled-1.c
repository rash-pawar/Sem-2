#include <stdio.h>
int main(){
    float distance, time, speed ;
    printf("enter the distance teavelled (in km):");
    scanf("%f",&distance);
    printf("enter the time taken (in hours):");
    scanf("%f",&time);
    if ( time <=0){
        printf("greater than zero.\n");
    } else {
        speed = distance/time ;
        printf(" speed of the car is %2f km/h\n", speed);
    }
    return 0 ;
}