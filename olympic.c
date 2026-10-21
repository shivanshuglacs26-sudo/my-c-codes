#include<stdio.h>
int main(){
    int year;
    printf("enter your number");
    scanf("%d",&year);
if(year%400==0||year%4==0&&year%100!=0){
    printf("yah olympic year hai %d",year);
}
else{
    printf("not olympic year %d",year);
}
return 0;
}