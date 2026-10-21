#include <stdio.h>
int main(){
    float din,ghante,minute,year;
    printf("enter your year");
   
    scanf("%f",&year);
     din=year*365;
     ghante=din*24;
     minute=ghante*60;
    printf( "din=%0.1f\n",din);
  printf( "ghante=%0.1f\n",ghante);
  printf( "minute=%0.1f\n",minute);

return 0;
}