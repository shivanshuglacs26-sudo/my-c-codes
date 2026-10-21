#include<stdio.h>
int main(){
    int ch;
    printf("enter your charector in digit");
    scanf("%d",&ch);
    if(ch%2==0){
        printf("even number %d",ch);
    }
    else{
        printf("odd number %d",ch);
    }
    return 0;
}
