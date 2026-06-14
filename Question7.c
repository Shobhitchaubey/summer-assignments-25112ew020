//write a programe to print the product of the digits of a given number
#include<stdio.h>
int main()
{
    int n,r,product=1;
    printf("enter any number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        r=n%10;
        product=product*r;
        n=n/10;
    }
    printf("the product of the %d is :%d",n,product);
    return 0;
}