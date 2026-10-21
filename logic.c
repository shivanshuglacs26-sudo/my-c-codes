#include<stdio.h>

int main(){
    int n;
    printf("enter your number");
    scanf("%d",&n);
    if((n%3==0)&&(n%7!=0)||(n%3!=0)&&(n%7==0)){
        printf("number 3 ya 7 ka multiple hai per dono ka nahi ",n);
    }
    else{
        printf("yah 3 0r 7 mai se   kisi ka multiply nahi",n);
    
        
    
}
return 0;
}