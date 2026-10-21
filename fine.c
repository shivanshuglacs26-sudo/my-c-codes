#include <stdio.h>
int main(){
    int day;
    printf("enter your day");
    scanf("%d",&day);
    if((day>=1)&&(day<=5)){
   printf("finne=2rs/day total= %d",day*2);
    }
    else if((day>=6)&&(day<=10)){
    printf("fine=5rs/day total %d",day*5);
    }
    else{
        printf("fine=10rs/day total= %d",day*10);
    }
    return 0;
    }