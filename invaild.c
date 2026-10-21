#include<stdio.h>
#include<string.h>
int main()
{
char email[100];
printf("enter your number");
scanf("%s",email);
if(strchr(email,'@')!=NULL){
printf("valid",email);
}
else{
    printf("unvalid",email);
}
return 0;
}