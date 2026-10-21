#include<stdio.h>
int main(){
    int m,n,k;
    printf("enter your  number: m,k,n");
    scanf("%d%d%d",&m,&n,&k);
    if(n>m&&n>k)
    {
        printf("%d is largest number",n);

}
else if(m>n&&m>k){
    printf("%d is largestnumber",m);
}
else{
    printf("%d is largest number");
}
}