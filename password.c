#include<stdio.h>
int main(){
    int lenght;
    printf("enter your lenth");
    scanf("%d",&lenght);
    if(lenght>=8){
    printf("passsword_strong",lenght);
    }
    else{
  printf("weak_password",lenght);
    }
    return 0;
}