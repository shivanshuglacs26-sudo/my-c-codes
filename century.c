#include <stdio.h>
int main(){
    int year;
    printf("enter your year");
    scanf("%d",&year);
    if(year%100==0){
        printf("century year hai%d",year);

    }
    else{
        printf("not century year %d",year);
    }
    return 0;
}

