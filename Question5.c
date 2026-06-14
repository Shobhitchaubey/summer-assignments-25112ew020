//Write a programe to print sum of digit of a given number
#include<stdio.h>
int main()
{
    int n,r,sum=0;
    printf("enter any number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        r = n%10;
        sum = sum + r;
        n=n/10;
    }
    printf("the sum of the digits of a given number is:%d",sum);
    return 0;

}
