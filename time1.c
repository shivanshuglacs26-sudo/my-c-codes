#include<stdio.h>
int main()
{
    int n;
    printf("enter your numnber");
    scanf("%d",&n);
    if((n>=5)&&(n<=11)){
        printf("morning %d",n);
    }
    else if((n>=12)&&(n<=16)){
        printf("Afternoon",n);
    }
    else if((n>=17)&&(n<=20)){
        printf("Evening ",n);
    }
    else if((n<=21)&&(n>=4)) {
        printf("night",n);
    }
    else{
        printf("error",n);
    }
    return 0;
}