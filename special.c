#include<stdio.h>
int main(){
    char ch;
    printf("enter your char");
    scanf("%c",&ch);
    if(ch=='@'||ch=='#'||ch=='$'){
        printf("special login symbol",ch);
    }
    else{
        printf("no special symbol",ch);
    }
    return 0;
}