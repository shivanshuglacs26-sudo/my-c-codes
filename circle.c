#include <stdio.h>
int main(){
    int r;
    printf("enter your number=");
    scanf("%d", &r);
    float area=3.14*r*r;
    printf("area_of_circle=%0.2f",area);
    return 0;
}