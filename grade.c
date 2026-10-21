#include<stdio.h>
int main(){
    int n;
    printf("enter your number");
    scanf("%d",&n);
    if((n<=100)&&(n>=90)){
        printf("%d pass with grade A",n);
    }
    else if((n<90)&&(n>=80)){
        printf("%d pass with grade B",n);
    }
    else if((n>=60)&&(n<=79)){
        printf("%d pass with grade c",n);
    }
     else if((n>=0)&&(n<60)){
        printf("%d fail",n);
     }
    else{
        printf("%d error",n);
    }
   
    
    return 0;
}
