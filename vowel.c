#include <stdio.h>
int main(){
    char ch;
    printf("enter your charcter");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
        ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("vowel %c",ch);
    }
    else{
        printf("consonent %c",ch);
    }
}
