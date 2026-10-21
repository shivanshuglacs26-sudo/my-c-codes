#include<stdio.h>
int main()
{
    int year;
    float salary,bonous,total;
  
    printf("enter your salary");
    scanf("%f",&salary);
   printf("enter service year");
    scanf("%d",&year);
   
     
if(year>5){
    bonous=salary*0.05;
    total=salary+bonous;
    printf(" bonous=%0.2f \n",bonous);
    printf("total salary with bonous=%.2f\n",total);

}
else{
    printf("no bonous,your salary is %.2f \n",salary);
}
return 0;
}