#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter your value of a b c");
    scanf("%d%d%d",&a,&b,&c );
    if(a>=b&&a>=b){
        if(a==b&&a==c){
            printf("teno bade ya barabar hai",a);
        }
        else if(a==b){
            printf("a or b bade or baerabar hai",a);
        } 
        else if(a==c){

            printf("a or c dono bade hai or barabar hai",a);
        } 
        else{
            printf("a sabse bada hai",a);
        }
    }
      else if(b>=a&&b>=c){
        if(b==c){
            printf("b or c bade hai or barabr hai ",b);

        }    
        else{
            printf(" b sabse bada hai",b);
        }  
        
    }
else{
    printf(" c is a grater",c);
}
return 0;
}

