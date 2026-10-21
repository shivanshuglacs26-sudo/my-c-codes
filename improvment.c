#include<stdio.h>
int main(){
    int marks,atten;
    printf( "enter your marks and atten");
    scanf("%d%d",&marks,&atten);
    if(marks<40||atten<60){
        printf("need for improvment",marks,atten);
    }
    else{
        printf("no improvment",marks,atten);
    }
    return 0;
}