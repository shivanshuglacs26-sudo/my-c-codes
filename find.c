#include<stdio.h>
int main(){
    int a,b ,c;
    printf("enter your name: a");
    scanf("%d",&a);
      printf("enter your name: b");
    scanf("%d",&b);
  printf("enter your name: c");
    scanf("%d",&c);
    if(a==b&&b==c){
        printf("equilateral triangle",a,b,c);
    }
    else if(a==b||b==c||a==c){
        printf("isoscalene trangle",a,b,c);
    }
    else{
        printf("scalene",a,b,c);
    }
    return 0;
}