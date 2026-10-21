#include<stdio.h>
int main(){
    float t1,t2,d1,d2;
    printf("enter number t1");
    scanf("%f",&t1);
  printf("enter number t2 ");
    scanf("%f",&t2);
       printf("enter number td1");
    scanf("%f",&d1);
  printf("enter number d2 ");
    scanf("%f",&d2);
    float s1=d1+d2;
    float s2=t1+t2;
float avg=(s1/s2);
printf("avg=%.1f",avg);
    return 0;
}