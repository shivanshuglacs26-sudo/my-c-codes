#include<stdio.h>
int main(){
    int curent_year,birth_year;
    printf("enter your current birth:");
    scanf("%d",&curent_year);
    printf("enter your date of birth:");
    scanf("%d",&birth_year);
    int age=curent_year-birth_year;
    printf("age=%d",age);
    return 0;
}