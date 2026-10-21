#include<stdio.h>
int main()
{
    int n,m;
    printf("enter your number: ");
    scanf("%d", &n);
    printf("enter your second number: ");
    scanf("%d", &m);
    if(n>m)
    {
        printf("n is largest number%d",n);
    }
    else if(m>n)
    {
        printf("m is largest number%d",m);
    }
    else
    {
        printf("both are equal");
    }

    return 0;
}