#include<stdio.h>
int main(){  int tem;  printf("enter your tem");
scanf("%d",&tem);
if(tem<0){   printf("ice%d",tem);
}
else if((tem>0)&&(tem<100)){
    printf("water%d",tem);
}
else{
    printf("stream",tem);
}
return 0;
}
