#include<stdio.h>
int main(){
    char r;
    int salary;
    printf("enter your rating and salary");
    scanf("%c",&r);
    printf("enter your value salary");
    scanf("%d",&salary);
     if(r=='a'||r=='A'){
          printf("ratinti a  bounous=%d",salary*20/100);
    }
    else if(r=='b'||r=='B'){
        printf("rating b bonous=%d",salary*10/100);
    }
    else if(r=='c'||r=='C'){
        printf("rating c bonous =%d",salary*5/100);
    }
    else{

        printf("rating d no bounous");
    }
return 0;
    
}