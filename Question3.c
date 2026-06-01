#include<stdio.h>
int main()
{
    int n,factorial=1;
    printf("enter any number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        factorial = factorial*i;
    }
        printf("factorial of %d is %d",n,factorial);
    
    return 0;
    
}