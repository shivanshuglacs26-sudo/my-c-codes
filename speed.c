#include <stdio.h>
int main(){
    float dis,time;
    printf("enter your dis");
    scanf("%f",&dis);
    printf("enter your time");
    scanf("%f",&time);
    float speed=dis/time;
    printf("speed=%0.2f",speed);
}