#include<stdio.h>
int main(){
int marks;
printf("enter your marks");
scanf("%d",&marks);
if(marks<=100){
    if(marks>=90){
        printf("marks greatre than 90 si garde =A %d",marks);
    }
    else if(marks>=80&&marks<90){
        printf(" grade b",marks);

    }
    else if(marks>=70&&marks<80){
        printf("grade b",marks);
    }
    else if(marks>=60&&marks<70){
        printf("grade d",marks);
    }
    else{
        printf("fail",marks);
    }

}
else{
    printf("error beause you entre up to 100 beause exam beciome onky 100 marks",marks);
}
return 0;
}