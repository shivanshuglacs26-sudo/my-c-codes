#include<stdio.h>
int main(){
    int n;
    printf("enter your number");
    scanf("%d",&n);
    if(n<=18){
        printf("chota bhai a\n",n);

    }
    else if((n>18)&&(n<=30)){
        printf("bich ka bhai b\n",n);
    }
    else {
        printf("bada bhai  c\n",n);
    }
    return 0;
}